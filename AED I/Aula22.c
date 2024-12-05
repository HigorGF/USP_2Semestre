
//Continução árvores binárias de busca
    //Inserção e exclusão em árvores binárias de busca


//Depois ambas as funções serão adaptadas para poder fazer o equilibrio da arvore.
    
bool inserirno(pont* raiz, tipochave ch){ //lembre-se que é o PONTEIRO do PONTEIRO da raiz
    if(*raiz == NULL){ //Dessa forma consigo verificar se tem alguma raiz, e se não tiver, eu posso criar 
    *raiz = criarNovoNo(ch);
    return true; // criei a raiz e  agora está
    }
    //Se tiver já uma raiz, ai eu procuro
    else{
        if((*raiz)->chave >= ch) //Confiro se é maior ou menor.
            return inserirno(&(*raiz)->esq,ch); //Eu acesso a raiz, e acho quem guarda o meu esquerdo, por isso o & antes de tudo, é o pra subir no ponteiro do ->esq.

        else return inserirno(&(*raiz)->dir,ch); // mesma coisa pro direito.
        //Desse jeito está feito a recursividade.
    }
}


//Exclusão

//Se não tiver retorna false, ela sera recurisva dentro da propria função

bool excluirno(pont* raiz, tipochave ch){
    pont atual = *raiz;
    if(!atual) return false; //Não há nada, logo eu não tenho o que excluir
    
    if(atual->chave == ch){ //Achei o CH
        pont substituto, pai_substituto; //Preciso saber quem vai ficar no lugar dele depois da exclusão, pai substituto não serve pra nada
    
        if(!atual->esq || !atual->dir){ //Isso roda se ele não tem um dos filhos, ou seja é o ultimo antes da folha, então é só subsitituir
            if(atual->esq) substituto = atual->esq;
            else substituto = atual->dir;
            *raiz = substituto; 
            free(atual); //Apago quem eu buscava
            return true;//Consegui
        }

        else{
            substituto = marioAesquerda(atual,&pai_substituto); //Pai substituto é só pra poder rodar essas função sem problema.

            atual->chave = substituto->chave; //Coloco o vetor substituto no lugar de quem vai ser excluido
            ch = substituto->chave; //Eu já Substitui o que eu queria apagar de fato, agora eu preciso achar o original ( o que virou o substituto)
        }

    }

    //Caso eu ainda não passei pelo return true, ou seja, achei o CH mas não o substituto eu chego aqui
    if(ch>atual->chave) return excluirno(&(atual->dir),ch); //Chamo pra direita se for o caso
    return excluirno(&(atual->esq),ch); //Ou chamo pra esquerda


}










