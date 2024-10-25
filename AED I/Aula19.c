//Continuando a exclusão da árvore binária de busca

//Vamo definir agora as funções auxiliares que ajudaram na exclusão



//Essa busca auxiliar, diferente da norma, vai retornar duas coisas, o return com a chave buscada e o ponteiro com o pai dela
PONT buscaNo(pont raiz, TIPOCHAVE ch, pont* pai){
    pont atual = raiz;
    *pai = NULL;
    while(atual){
        if(atual->chave==ch) return atual;
        *pai = atual;
        if(ch<atual->chave) atual=atual->esq;
        else atual = atual->dir;
    }
    return NULL; //se não achou retorna null, poderia retornar o atual mesmo que ele é null, mas assim fica mais claro do que se trata
}


PONT maioraesquerda(PONT raiz, pont* ant){
    *ant = atual;
    atual = raiz->esq;
    //Ja faço esse primeiro passo na declaração pois sei que ele tem ao menos um maior à esquerda
    while(atual->dir){
        *ant = atual;
        atual = atual->dir;
    }
    return atual;
}

//Sò de bonus Menor a direita é exatamente o oposto da função anterior
PONT menoradireita(PONT raiz, pont* ant){
    *ant = atual;
    atual = raiz->dir;
    //Ja faço esse primeiro passo na declaração pois sei que ele tem ao menos um maior à esquerda
    while(atual->esq){
        *ant = atual;
        atual = atual->esq;
    }
    return atual;
}



//A gente também pode analisar a complexidade assintotica dessas funções, que todas são O(n) no pior caso

//Analisando assintoticamente, o numero de nós N minimo sé h+1 e o máx é 2^(h+1)-1 sendo h a altura
//Isso me diz que a altura é no minimo n-1 e no máximo log2(h+1)-1 (que pode ser dito como log2(n)
    // log2(n) < h <= n-1
    //Calculadno o caso médio posso falar que é 2*log2(n) com inserções aletórias, isso é O(logn)
        //Lembrando que o pior caso, o usuario pode inserer de maneira que fique N
            //Isso nem é tão raro assim, normalmente é muito comum inserir elementos ordenados e isso é o pior possível para uma árvore binária
            //O pior caso normalmente é o mais observado, caso médio não é parametro corporativo a maioria das vezes

//Para garantir então o balanceamento da árvore e deixar ele sempre como O(logn) mudaremos as operações de inserções e exclusões
    //isso vai piorar um pouco a inserção e a exclusão, mas existe um meio termo entre elas que garante que ambas fiquem logn, talvez com menos ou mais constantes

//Mas isso nos veremos só em uma aula futura


