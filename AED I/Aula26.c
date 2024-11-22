//A exclusão em árvore AVL
    //Um problema que não foi tratado originalmente

    //Lembrando que excluir nó com mútiplo filhos fica díficil, então normalmente colocamos o maior à esquerda para substituir ele.
    //A regra de problemas continua se aplicando apenas ao atecessores (nunca aos filhos são problemas)

    //Tanto a inserção e a exclusão fazem uma operação e depois recursivamente procuram se algum antecessor está com 2 ou -2. Se estiver as funções de rotação são chamadas.

    //A diferença é que nesse caso, o problema pode ser -2/2 e todos os filhos com balanceamento 0.
    
    //Caso não for um caso com balanceamento 0 no filhos, O node com -2/2 sempre será o P, com isso posso aplicar uma rotação normal e não haverá problema algum.

    //No caso de ser 0, chamamos L0 e R0.

        //Analisando o L0 (simetrico ao R0)
        //Nesse caso analisamos só P e U
        //O P nesse caso pode ser um node somente com o U do lado esquerdo e vazio do direito.
            //Ou seja, o lado direito de P é opicional

        //O que irá acontecer é que o U será a raiz, e seu pontareiro para direita passa a ser o P, e o ponteiro da esquerda do P passa ser o ponteiro antigo da direita do U.
            //Analisando pelo slide, a sequencia de "folhas" B C A, continua B C A.

        //Nesse caso eu não mudei a altura desse trecho, a "raiz" do techo continua sendo h
            //A propria exclusão diminuiu a altura, então não faria sentido a rotação diminuir mais uma vez

        


pont rotacaoL (pont P){
    pont u,v
    u = p->esq;
    //Esse é outro "else" daquelas possibilidades da aula anterior
    if(u->bal == 0){
        p->esq = u->dir;
        u->dir = p;
        //p->bal = -1;
        //Isso é opicional, pois mesmo p indo virar -2 nós nem alteramos pois já vamos arrumar de qualquer forma, logo p já é -1.
        u->bal = 1;
        return u;
    }
}

//Ou seja, tem 3 possiblidades para cada L que são simetricas ao R: LR,LL e L0 (sendo L0 exclusivo da exclusão).
    //Sendo respectivaemente U igual a 1,-1 e 0

