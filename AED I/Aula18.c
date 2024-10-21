//Correção do EP

//Continuação de arvores de busca binária


//Axuiliar, criar novo

pont criarno(TIPOCHAVE ch){
    pont novo = (pont)malloc(sizeof(no));
    novo->esq = NULL;
    novo->dir = NULL;
    novo->chave = ch;
    return novo;
}


//Inserção
//Sigo a regra de ordenação indo pro lados certos (direita ou esquerda) até achar o primeiro 
//espaço vazio

void inseririt(pont* raiz,TIPOCHAVE ch){
    //Não fala onde será inserido pois será de acordo com o valor
    //COloco como ponteiro de pont pois se ela tiver vazia eu preciso criar ela
    if(*raiz == null) *raiz == criarno(ch);
    else{
    //agora sigo a regra
        pont atual = *raiz;
        
        while(atual){
            If(ch > atual->chave){
                if(atual->dir == null)
                    atual->dir = criarno(ch);
                    return;
                else atual = atual->dir;
            }
            //Lembrnado que não há repetições como combinado com o usuário
            if(atual->esq == null){
                    atual->esq = criarno(ch);
                    return;}
            else atual = atual->esq;
            
        }
    }
}

//Complexidade é a altura da raiz no pior caso
//O(h), e h = n-1 sendo n o numero de nós, que é quando ela ta super desbalanceada.


//Outra versão com menos linha

void inserirec(pont* raiz,TIPOCHAVE ch){
    pont atual = *raiz;
    if(!atual) * raiz = criarno(ch);
    else{
        if(ch>atual->chave) inserirec(&(atual->dir)); //Essa é a parte complicada, é o endereço do campo atual, nunca fizemos isso antes. É o endereço de um campo do tipo endereço, ou seja um pont**
        
            else inserirec(&(atual->esq));
    }
}
//Também mesma complexiade

//A exclusçao super complicada
    //ela usa função auxiliar que só faremos na proxima aula

bool excluirno(pont* raiz, tipochave ch){
    pont atual, pai, subs, paisubs;
    atual = buscano(*raiz,ch,&pai); //É a primeira função auxiliar, diferente da busca que fizemos, essa retorna também o anterior e coloca no (pai)
    if(atual == NULL) return false; //Não existge, retorno falso
    //Subs vai ser pra onde o pai vai apontar de quem está sendo apagado
    if(!atual->esq||!atual->dir){
        if(atual->esq) subs = atual->esq;
        else subs = atual->dir //independe do que seja, vai ser o que tem que ir pra direita
        //Agora preciso descobrir se sou filho direito ou esquerdo do meu pai
        //Pra isso prefio primeiro conferir se sou a raiz (ela não tem pai)
        if(!paisubs){
            *raiz = subs;
        }
        else{
            if(pai->esq == atual) pai->esq=subs;//"Se sou filho esquerdo do meu pai"
            else pai->dir=subs; //Se não sou o esquerdo, sou o direito
        }
        free(atual); //Exclui ele de fato;
    }
    //Agora e se eu tivesse dois filhos??
    else{
        subs=maioresquerda(atual,&paiSubs);
        atual->chave = subs->chave;
        //Eu apago agora o subs,
        if(paisubs->esq==subs) paisubs->esq = subs->esq; //Lembrando que o maior da esquerda nunca terá um filho a esquerda. Mas pode ter a direita, e ai eu preciso arrumar o pai dele para apontar para esse filho a direita
        else paisubs->dir = subs->dir;  //Mesma coisa vale vice-versa para o maior da direita
    }

}
