//Arovres

//Estruturas serão só dessa forma agora
    //Até agora a única busca menor que O(N) foi a busca binaria (O(logn))
    //Em inserção e exclusão tivemos as pilhas e filas que são O(1)
    //Sempre tinha um tradeoff, ou era organizado com busca rapida ou desorganizado com inserção e exclusão rapidos

//Quando não está ordenado, de fato a unica forma de achar um valor é sequencialmente, sendo O(N)

//A busca binária é eficiente, mas é possível cirar uma estrutura que já ajuda nisso
    //Cada numero vai ter seu proprio valor e vai ter um ponteiro para apontar para a metade dos menores e outro para a metade dos maiores
        //Isso recursivamente, formando então de fato a árvore (ou uma raiz sla, em computação ela crssce para baixo)

    //No - carrega o valor, o ponto da árvore, elemto que a forma
    //Pai - O acima de você, você só pode ter no máximo um
    //Filho - o elementgo apontado
    //Raizes - A parte cental da árvore, fonte, única sem pai
    //Folhas - Não apontam para ninguém, sem filho
    //Subarvores - Arvores formadas através de outras        

    //Arvore binária são aquelas que cada arvore pode ter ATÉ dois filhos, existme arvorés
    //que podem ter mais (Pode ter 1 ou 0 filhos também)
        //Só tem duas subarvores em cada nó de uma árvore binária

    //Descendente e Ascendentes/Ancestrais
        //Os anteriores à ele (Avos, bisavós)
        //Descendentes (Meio óbvio entender né)


//Altura - Camada das ávores
//Profundidade - Distancia até a raiz


//Aroves exigirão muita recursão para serem feita de forma simples, é um sofrimento fazer interativas, mas economiza memória

//Arvore binaria de busca é difernete de arvore binária, não confunda
    //Arvore binaria de busca possui uma estrutura ainda mais específica da árvore binária feito para acelerar operações de pesquisa


//Estrutura
typedef struct aux{
    int ch;
    struct aux* dir;
    struct aux* esq;
} No
//
//
//
//

//Exemplo contando n nos
int numNos(No* atual){
    if(!atual) return 0;
    return 1+numNos(atual->esq)+numNos(atual->dir);
}



//Iremos agora aprender durante um mês como a arvore ficar bem divida para podermos fazer busca, inserção e exlcusão rapidas