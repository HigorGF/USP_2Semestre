//Arvore AVL
 //Sigla vinda do nome dos craidores,Adelson  Velsky e Landis
 //Chamada de arvore de arvores binaria de busca BALANCEADAS (ou balanceadas de buscas)

//Lembrando que manter a árvore sempre balanceada pois daria muito trabalho, é necessário aquele equilibrio dado pela regra.

//Na árvore AVL a regra é que a altura da arvore a esquerda ou a direita (de qualquer nó) deve ter uma diferença de no máximo 1.
    //Isso será dado toda inserção ou exclusão eu volto recursivamente por todos valores para conferir se surgiu algum desses balancementos.
        //Operação dessa conferência é a Rotação

//No fim, com essa regra, a complexidade será O(logn).

//No fim, tudo se resume à analiser 3 nó diferente calssificados em vários tipo. A recursão faz o resto.
//Ex:
//      1
//        \
//          2
//            \
//              3

//Isso está desbalanceado, pois a altura da esquerda do 1, está com diferença maior que a do 3.
    //Analisando eu sei que o pai dele nunca vai ser um problema, pois se fosse já era pra estar corrigido. O problema é sempre um antepassado do avô pra cima.


//Existem 4 configurações possíveis desbalanceadas para 3 nós, "\" (do exemplo), "/", "<" ou ">"
    //Chamdos respectivamente de
        //Direita, Direita (RR)
        //Esquerda,Esquerta (LL)
        //Esquerda, Direita (EL)
        //Direita, Esquerda (RL)

//Para três nó, a única configuração balanceada possível é semelhante à um ^ 
//      2
//    /   \
//   1     3

//Essa é a essência da maneira de resolver o problema com recursividade.
    //Resumindo, inserir e excluir vão, depois de comprir o seu dever, realizar uma busca para cada antepassado do nó inserido/excluido conferindo se tem balanceamento.

//Nomenclatura fica P, U, V normalmente (Problema, filho dele, e neto dele).

//Para cada um daqueles casos de desequilíbrio terá um tratamento difenrete

//Fala sobre o EP


