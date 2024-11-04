//Essa esturura de dados vai ser o exemplo que não pode ser feito recursivamente
//Por isso o exemplo anterior

//Isso vale pra qualquer arvore binária, não necessariamente de busca 

//Percurso Em nível
    //Ou seja eu primeiro quero imprimir na ordem da altura da esquerda pra direita (De cima pra baixo)
    //Para isso a recursividade não funciona, pois quando eu deço um galho eu não consigo ver o outro.
    //Ex Raiz, Raiz->Esq, Raiz->Dir, Raiz->Esq->Esq, Raiz->Esq->Dir, Raiz->Dir->Esq, Raiz->Dir->Dir

//Ou seja, eu tenho que guardar os dados dos filhos que irei imprimir posteriormente
    //Para isso a fila é perfeita

//Vai ser muito semelhante ao exemplo iterativo anterior, mas invés de usar pilha vai ser filha


//DFS é  "Deep First Search", ou seja, procure o mais profundo primeiro, e depois começa a ir pra direita. 
    //O pré-ordem, o em ordem e o pós ordem seguem essa lógica
    //Chamado em busca em profundidade em português

//O Em nível (mais usado em grafos) é um BFS ou seja, Breadth-First Search, que significa procure todos os vizinhos, depois todos os filhos, depois os netos etc... 
    //Chamado de busca em largura em português

//Agora vamos ao exemplo

void exibiremnivel(pont raiz){
    if(!raiz) return; //Isso aqui não é condição de parada, até porque não é recursiva. É só garantir que tem uma raiz para fazer alguma coisa.

    FILA f;
    inicialzarFila(&f);
    entrarFila(raiz,&f);
    Pont atual;
    while(!isEmpty(&f)){ //continua fazendo algo enquanto tem cosia na fila
        atual = sairfila(&f); //Pego o proximo e processo
        printf("%i",atual->chave);
        if(atual->esq)
            entrarfila(atual->esq,&f); //Guardo os filhos dele, isso é muito comum
       if(atual->dir)
            entrarfila(atual->dir,&f);
    }
}

//Agora falando da compelxidade
    //Ela não pode ter nada recursivo pois ela é iterativa.
    //Inserir, tirar, atualizar é tudo O(1);
    //Só que temos o mesmo problema da aula passada, o loop é meio independe.
        //Eu poderia pensar que a cada um, temos no pior caso duas inserções, mas ai seria uma compelxidade infinita
        //Analisando de mais especificamente, cada nó é só imprimido uma vez, passando por cada nó também uma vez. E somente dessa forma podemos afirmar que é O(N).
            //Nesse caso N é meio ambiguo. é o numero de nós da arvore mas ele não está explicito em nenhuma variável durante o código, isso é uma abstração.
            //Entender o que o código faz é mais importante para analisar ele.


