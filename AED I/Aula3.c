//  12/08

//Lista Ordenada
    //-Inserção tem que estar ordenada
    //Depois será feita a busca



//Utilizando do que já existe:


#include <stdio.h>
#include <stdlib.h>

typedef bool int
typedef tipochave int


define false -1;
define true 0;


bool inserir(Lista* l, Registro reg){
    if(l-nroelem >= Max) return false;
        //invés de fazer uma busca binaria para achar o numero, é melhor já ir descolando do maior pra o menor 
        //pois o deslocamento será feito de qualquer jeito.
        int pos = l->nroEleme; //Primeio posição vazia da lista (lembrando que ela começa no 0)
        while(pos > 0 && l->A[pos-1].chave > reg.chave){
        //pos > 0 é para se o elemento for o menor de todos, ai ele só irá prarar de mover quando chegar lá
        //Caso o valor não for o menor possível, ele irá sempre comparar com o valor que está a esquerda dele
        
        //Enqautno isso acontecer eu vou movendo pra direita:
        l->A[pos] = l->A[pos-1]
        pos--;
        }
    //agora que o espaço liberou:
    l->A[pos] = reg;
    l->nroElem++;
    return true;
        }

//Agora vamos usar a busca binaria para procurar nessa lista organziada que retorna a pos de um num

//Esse só funciona em liustas organziadas, mas tem algoritimos binarios semelhantes que funcionam em qualquer uma
//Corta pela metade a quantidade
int buscaBin(lista* l,tipochave ch){
int ini = 0
int fim = l->nroElem-1; //como é posição, preciso -1

while(ini<fim){
    int meio = (ini + fim)/2; //Divisão inteira resolve os impares

    if(l->A[meio].chave == ch) return meio;
    if(l->A[meio].chave < ch) ini = meio+1; //Se achei um valor menor, então eu corto para metade dos maiores
    else fim = meio-1; //Se achei um valor maior, então eu corto para metade dos menores
    //-1 e +1 é´porque eu já sei que o meio em sí não é o valor, porque se fosse já teria encontrado
}
return ERRO; //Se chegar aqui ele não achou
}

//Ele poderia ser recursivo, mas isso é mais da área de IAA

//Essa lógica é O(logn)
//Complexidade não é SEMANTICA é custo de execução
//Já é bem rápida


//Exclusão continuará O(N) pois tem aquele probelma dele achar rápido e ter que deslocar muito,
// ou demorar pra achar e deslocar pouco

Excluir(lista* l, )
//Professor não fez, depois vc tenta fazer pra treinar





//Estrutura com alocação dinamica
//Ou seja, o usuario pode definir o tamanho do arranjo

typedef struct {
    tipochave chave;
    int valorrandomico;
} registro

typedef struct {
    registro* A;
    int nroElem;
    int maxElem; //Máximo
} Lista


//A unica diferença basicamente vai ser o inicializar (e o reinicializar) da lista
//já que o usuario tem que falar o tamanho que deseja
void inicializar(lista* l, int tam){
    l->nroElem = 0; //Zerar quantos tem
    l->nroElem = tam; //Definir máximo

    //Só que ainda não existe nada no espaço de registro, então eu preciso criar um espaço de memórida
    //para ele. Para isso vo usar o Malloc para guardar aqueles bytes.
    l->A = (registro*) malloc(sizeof(registro)*tam);
    //sizeof retorna o numero de bytes que uma estrutura registro vai preciar, como a lista tem vários registros,
    //eu mutiplico pela quantidade de registro que terá.

    //a parte do (registro*) é só para conveter o tipo no que ele é, ou seja, transformar os bytes reservados de fato em
    //registro* (ponteiro de registro)


    //malloc não some com as memórias, só quando o programa termina de rodar, 
    //então é bom se perguntar se um free() correspondente para não vazar a memória.

    void limpart(lista* l){
        free(l->A); //Limpou
        l->A = NULL     //Esses mudança de valores para NULL ou 0 Impedem que 
        l->nroElem = 0; //alguém (uma função) tente usar sem querer esse ponteiro e gerar erros  
        l->nroElem = 0; 
    }
    //Voce pode acabar criando registro em uma lista que foi mal apagada, então isso é sempre importante
    


}














}