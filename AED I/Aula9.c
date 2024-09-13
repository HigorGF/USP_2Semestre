//Filas
//Insere no inicio, tira no final


//Logica do pilha/stack é do "LIFO" é a do "UEPS"
//Enquanto a da fila/ é o "FIFO" que é a do "PEPS"


//Implementação Estática
    //Ou seja, com arranjo

//Exclusão vai apagar e retornar o apagado conforme a pilha
    //Deve excluir o primeiro
    //Deve alterar o ponteiro do "primeiro"

//Inserção
    //Deve inserir no final
    //Será encarado como um arranjo circular, o último deverá apontar para o primeiro
    //Isso pode ser feito usando o módulo de max (então se max for 50, e eu inserir no 51, eu voltarei para o 1)
        //Esse truque matemático já será o suficiente para fazer algo "circular"


#include <stdio.h>
#include <stdlib.h>

typedef bool int
typedef tipochave int

#define max 50
#define erro -1
#define true 1
#define false 0
#define invalido -1
typedef struct


typedef struct aux{
    tipochave ch;
} registro; 

typedef struct {
    registro A[max]
    int inicio; //Note que é um inteiro e não um ponteiro
    int nroElemen;
} FilaS;

//A inserção vai sempre ser nroElemen+Inicio por principio matematico óbvio

void inicializar(FilaS* f){ //Tem que ser ponteiro pois você vai alterar os campos
    f -> inicio = 0;
    f -> nroElemen = 0;
}

//Não vamos considerar uma lista sem elementos repetidos, pois fazer uma busca na fila faria
//uma perda de eficiencia simbólica 

bool inserir(FilaS* f, registro reg){
    if(nroElemen == max) return false;
    int local = (nroElemen + inicio)%max //Aqui é aquilo que foi dito, eu faço "circular" de maneira matematica
    f -> registro[local] = reg;  //Poderia por toda expressão do local dentro do [], mas assim fica mais didático
    f -> nroElemen++;
    return true;
}
//Isso é O(1)

//Lembrando que nós retornamos quem apagamos
registro apagado;

bool excluir(FilaS* f, registro* apagado){
    if(nroElemen == max) return false; //Confiro se está cheio
    apagado = f -> registro[f-> inicio]; 
    f -> registro[f-> inicio] = NULL; //Apago o inicio (O professor não fez isso porquê é desnecessário, conforme insere ele será substituido naturalmente)
    f -> inicio = (f->inicio+1)%max;  //Falo que o inicio aumentou respeitando o "circular"
    f -> nroElemen--;
    return true;
}
//Agora apagado tem quem eu excluí.

//Faremos busca para demonstração, mas é bem incomum isso acontecer
int buscaSeq(FilaS* f, tipochave ch){
    int pos = f->ini;
    int i;
    for(i=0;i< f->nroElemen;i++){
        if(f->registro[pos].chave == ch) return pos;
        pos = (pos+1)%max; //circular aqui também
    }
    return false;
}

//Isso aqui é O(N), por isso não faz muito sentido usar já que tudo na fila/pilha são feitos com 
//objetivo de serem O(1);

//--------------------------------------------------

//Agora a implementação dinâmica delas

typedef struct aux{
    //Não tem tantas vantagens ter um nó cabeça
    //Vou ter dois ponteiros de inicio e fim
    registro reg;
    struct aux* prox;
    

} Elemento, Pont*


typedef struct{
    //Não precisa necessariamente de numeros de elementos já que é estático
    //Se precisar com frequência poderia ser interessante por para economizar
    pont inicio;
    pont fim;
} FilaD;

void inicializar(FildaD* f){
    f->inicio = NULL;
    f->fim = NULL;
}


bool inserir(FilaD* f, registro reg){
    pont novo = (pont)malloc(sizeof(elemento));
    novo->registro = reg;
    novo->prox = NULL; 
    
    //Existe uma exceção bem dificil de perceber aqui, com relação ao novo
    //Se não havia elementos na estrutura, eu preciso falar que o inicio também é igual
    //A esse elemento novo.

    //Mas antes irei arrumar o "prox" do último antigo
    if(f->ini){ //Caso não esja vazia
        f->fim->prox= novo; //Faço o antaigo último apontar para o novo último 
    }
    else{ //Caso estivesse vazia
        f->inicio = novo;

    }

    f->fim = novo; //Isso deve acontecer depois do primeiro if, já que tenho que alterar o último antigo


    return true; //Sempre vai inserir, sem depender de máx
}
//Isso também é O(1)

registro apag;
bool excluir(FilaD* f, registro* apag){
    if(f->ini == NULL) return false; //  Posso usar "!f->NULL" na condição
    apag = f->inicio->registro; //Não lembro se tem que ser *apag ou apag
    Pont aux = f->inicio->prox; //Preciso guardar o endereço do novo inicio
    free(f->inicio) //Apago
    f->inicio = aux; //Aplico o novo inicio

    //também tem uma exceção para caso a lista fique vazia, já que significa que o fim ainda está apontando para algo errado
    if(f->inicio ==NULL) f->fim = NULL; //Arrumei o fim agora, depois da exclusão
    return true;
}

//Também fazendo a busca sequencial em estrutura dinamica, mesmo sendo incomum.

int buscaSent(fila* f, tipochave ch){ //Aqui pode ser cópia pois a estrutura não é grande
//Aqui um sentinela faria sentido, porque é fácil fazer (eu já tenho o fim) e economizará memória

//Aqui iremos fazer o sentinela como variavel local invés de ser um nó, assim não preciso
//fazer um free nem um malooc

    if(!f-inicio) return false; //se tiver vazio
    Elemento sent;
    sent.registro.chave = ch;
    f->fim->prox = &sent;

    PONT atual = f->inicio;
    while(atual->registro.chave != ch){
        atual = atual->prox;
    }
    

    if(f->fim->prox == atual){
        //como eu mexi na estrutura para colocar o sentinela, eu preciso arrumar ela novamente
        f->fim->prox = NULL;
        return false; //Se ele achou a chave no sentinela, não achou.
    }
    
    //como eu mexi na estrutura para colocar o sentinela, eu preciso arrumar ela novamente
    f->fim->prox = NULL;


    return true;
}









