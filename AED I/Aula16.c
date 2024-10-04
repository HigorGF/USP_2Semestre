//EP 2
//Arvore N-árias


//Arvores que não se limita à 2 filhos
    //Pode ter ternaquias, quaternarias, etc..
    //O numero de filhos pode variar

//Para resolver os problemas de padrinização disso tem um método
    //Cada nó vai ser ligado para o seu irmão mais próximo
    //Isso pode fazer com que a gente precise apontar somente para o filho "mais novo" e para o "proximo irmão mais velho"
    //Isso exclui qualquer necessidade de esquerda ou direita

    //É como se fosse uma lsita ligada de irmãos (não de primos)


//Exemplo
//  1
//  |
//  2 - 3   -  4
//  |   |       |    
//  5   6 - 7   8 - 9

//Estrutura
typedef struct aux{
    TIPOCHAVE chave
    struct aux *primFilho, *proxIrmao;
} NO, *PONT;

//Como a estrutura não é ordenada, a gente vai inserir o filho de um nó como a gente quiser, e nesse caso vai ser o filho mais novo
    //O primeiro da lista ligada basciamente
    

//Exibição
    //Recursivo, pq é uma arvore
void exibirArvore(pont raiz){
    if(raiz==NULL) return; //Se for folha eu não imprimo
    printf("%d(",raiz->chave); //Printo a raiz de determinada arvore
    pont p = raiz->primFilho; //deço um nível para printar a camada de baixo
    while (p) {
        exibirArvore(p); //Chamo cada filho recurisivamente e vou printando
        p = p->proxIrmao;
    }
    printf(")") //Imprime um paretenes para mostar que a arvore terminou
}    

//Fica no formato 8(15(20()10()28())23()...
    //Onde X(C) onde os Cs são os filhos de X, note que os X() são folhas
    //Isso é único para cada árvore (se for feita dessa forma)

    //Complexidade O(N) pois passa por cada nó


//Busca também é recursiva, pode ser feita de maneira semelhante à arvore binária
    //Vejo se o pai é, se não for, faço uma recursão com cada filho

//Exclusão
    //Não é muito usado para ambiguidade no que é a exclusão




//Sobre o EP 2 -----------------------------------


//Um tipo de arvore N-aria
    //Arvore Tries
    //Um tipo de arvore N-arvore
    //Entrega dia 24/11

    //Tries
        //Recupera informação da arvore (ReTRIEval)
        //Pronuncia era "TREE", mas ficou "TRYE" para não ter como confundir
        //Cada nó tem uma letra (por isso o máximo é 26)
        //Inserção de palavras, cada palavra é uma lista ligada
        //Nâo tem letra repetida por andar
        //Contar quantas vezes a palvra existe (guardada no ultimo caractere da palavra)
        

