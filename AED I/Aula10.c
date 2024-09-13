//Deque - Double Ended Queue
    //Filas com pontas/extremidades duplas
    //Inserir ou excluir podem ser de pontas diferentes, nas extremidades~
    //Mais abstrato, sem muitos exemplos físicos
        //Poderia ser por exemplo, alguém enchendo um contenier aberto pelos dois lados.
    //Comumente é circular, mas nem sempre precisa ser, depende da estrutura
    

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


typedef struct aux{
    registro reg;
    struct aux* ant;
    struct aux* prox;
} Elemento, Pont*;


typedef struct{
    Pont cabeca;
} Deque;

//Obs: também posso, nas listas ligadas dessa forma podem, colocar um 
//cabeça para cada elemento dependnedo o quão dinamico é a estrutura
//Mas isso varia.

void inicializar(Deque* d){
    d->cabeca = (pont)malloc(sizeof(elemento));//Criando um cabeça
    //lembrando que é sizeof elemento e não de pont, pois é isso que estará nele.


    d->cabeca->prox = d->cabeca;
    d->cabeca->ant = d->cabeca;
    //Basicamente mando ele apontar para ele mesmo.
}

bool excluirfim(DEQUE q, registro *apagado){
    if(d.cabeca->prox = d.cabeca) return false; //Nada é nulo, então assim que verifico se está vazio
    *apagado = d.cabeca->ant->reg;
    pont apagar = d.cabeca->ant; //Guardo quem será apagado, isso facilita o código e ainda vai ajudar no free
    apagar->ant->prox = d.cabeça;
    d.cabeca -> ant = apagar->ant;
    free(apagado);
    return true;
}


bool inseririnicio(DEQUE* d, registro *incluido){
    //Sempre retorna ture pois nunca vai ser impossível inserir
    pont novo = (pont)malloc(sizeof(elemento));
    novo -> reg = incluido;
    novo -> prox = d->cabeca->prox; 
    novo -> ant = d->cabeca;

    d->cabeça->prox = novo; //Poderia ser i->ant->prox = i, já que o próximo do meu anterior sou eu
    novo->prox->ant = novo; //anteior do meu proxmo sou eu.

    return true;
}


//BUSCA NOVAMENTE, mesmo não sendo comum
    //Sentinela vai ser o nó cabela


bool buscaseq(DEQUE* d, tipochave* ch){
    PONT atual = d->cabeca->prox
    atual->reg.chave = ch;
    while(atual->reg.chave != ch){
        atual = atual->prox;
    }

    if(atual == d->cabeca){
        atual->reg.chave = NULL;
        return false;
    }

    atual->reg.chave = NULL;
    return atual;
}

//O deque precisa de um reinicializar de maneira especifica, pra liberar memoria.
void reinicializar(DEQUE* d){
    pont atual - d->cabeca->prox;
    while(atual != d->cabeca->prox){
        atual - atual->prox;
        free(atual->ant);
    }
    d->cabeca->prox= d->cabeca;
    d->cabeca->ant = d->cabeca;
}





