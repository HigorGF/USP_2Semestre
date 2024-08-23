//Retomando conceitos
    //Sentinela (Colocar sinal no último valor do array)
    //Busca binaria (Menor que a linear de N)
    //Lista Ligada (Elementos não precisam se descolocar)
    //Lista ligada Dinamica (Liberamos e Alocamos Memoria em tempo real)

//Colocaremos mais estruturas na lista ligadas
    //Colocaremos um sentinela
    //Não era possível chegar no sentinela antes na lista ligada pois eu precisaria de um FOR para chegar no ultimo 
    //elemento e então cria-lo, mas existe um truque


    //A lista ligada será circular (Nó Cabeça)
        //O ultimo invés de apontar pro nulo, apontará para o inicio da lista.
        //Nó cabeça é aquele antes do primeiro elemento válido, ele não existe pro usuário
            //Isso facilita, já que o algoritmo pode considerar que todo valor válido tem anterior
        

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



typedef struct{
tipochave chave;
} registro;

typedef struct aux{
    registro reg;
    struct aux* prox;
} Elemento, *Pont; 

typedef struct {
    pont cabeça; //inves de inicio
} Lista;



//Como o primeiro valor é o sentinela, o meu ultimo valor vai apontar para ele.
    //Eu não irei procurar nada nele efetivamente, mas eu posso utilizar o proprio valor cabeça como sentinela
    //Ou seja, eu coloco o valor que estou procurando nele, e no fim do meu loop, eu confiro se o elemento
    //foi encontrado em um node normal ou no cabeça
        //Se for em um node normal, achou na posição dele
        //Se for no cabeça, não achou.


void inicializar(Lista* l){
    //Eu tenho que ter referencia, pois eu vou criar o nó cabeça (ou seja, vou criar algo)
    //Depois disso ele não será mais alterado (até eu inicializar de novo)
l->cabeça = (pont)malloc(sizeof(elemento)); //Criei ele aqui (vazio);
l->cabeça->prox = l->cabeça; //faço ele apontar para ele mesmo para manter a lista circular
}




//Busca (vai estar ordenada, mas não precisaria, existe estruturas iguais para desordenadas)
    //Agora poderemos testar o sentinela
pont BuscaSentinela(lista * l, tipochave ch){ //Lembrando que posso passar cópia
    l->cabeca->reg.chave = ch; //Coloco o que estou procurando no meu cabeça (que será o sentinela também)
    pos = l->cabeca->prox;
    while(pos->reg.chave < ch){ //Está ordenado então posso usar o "<" invés do "!="
        pos = pos->prox;
    }

    if(pos->reg.chave == ch && pos != lista->cabeca){ //Pra saber que eu achei, eu preciso conferir se 1- Se não é o nó cabeça e 
                                                        //2- Como está ordenado, usei o "<"", então preciso confeir se de fato a chave da pos é a chave que estou buscando 
                                                        //obs* Se eu usasse o "!=" no loop, eu não precisaria dessa segunda condição
        return pos;
    }
    return erro; //Se chegou até aqui, não achou
}

//O nó cabeça também facilita a exclusão e a inclusão, já que como todos tem anterior eu não preciso fazer
//especificações


//Também faremos uma busca auxiliar (também terá dois retornos)


pont BuscaAux(lista * l, tipochave ch, pont* ant){
    l->cabeca->reg.chave = ch;
    pos = l->cabeca->prox;
    ant = l->cabeca;
    while(pos->reg.chave < ch){ //Agora o "<" invé do "!=" faz sentido, isso facilitará na exclusão e na inclusão ordenada
        ant = pos; 
        pos = pos->prox;
    }
    if(pos->reg.chave == ch && pos != lista->cabeca) return pos;
    return erro;
}

bool excluir(lista* l, tipochave ch){ //O endereço do nó cabeça, único valor da lista, não muda eu posso,
                                     //por incrivel que pareça, colocar a função para receber uma cópia
                                     //(mesmo assim passarei uma referêncai por padrão)
pont ant;
pont pos = BuscaAux(l, ch, &ant);   //Lembrando que o ant é um ponteiro, mas eu preciso editar ELE, e não o que está dentro dele, 
                                    //por iso eu tenho que chamar ele de ponteiro de ponteiro, ou estaria editando uma cópia

if(!atual) return false //Não achei para excluir

ant->prox = pos -> prox; //O anterior do que vou excluir tem que apontar para o subsequente do que será excluido (pra não ficar um "buraco" nas conexão)

free(pos); //Aqui eu excluo
return true;
}

//Lembrando que combinambos que não há repetição nesse array

bool incluir(lista* l, registro reg){ //Pelo mesmo motivo da exclusão, posso fazer uma cópia
pont ant;
pont pos = BuscaAux(l, reg.chave, &ant); //Lembrando que o parametro é um registor inteiro, não só a chave, então é diferente da exclusão
if(i) return false; //Confiro se o elemento já existe no arrai, pois a busca não vai retornar nada se não achar precisamente o que pedi

pont novo = (pont)malloc(sizeof(elemento));
novo->reg = reg;
ant->prox = novo;
novo->prox = pos;
return true;


}


//Ainda há mais uma função, o reinicializar
    //Como feito anteriormente, a maiora das estruturas podem ser reinicializadas simplesmente chamado a função inicilizar
    //mas esse não é o caso.


//Se eu inicializar simplesmente crio memórias orfãs, sem ponteiro apontando para elas, fazendo um vazamento
    //Isso porque o inicializar só cria o cabeça e aponta pra sí mesmo, nada além disso
//Eu preciso apagar os elementos craidos dessa vez

void reinicializar(lista *l){  //Ou reiniciar ou Clear ou restart, tanto faz
//Ela não vai apagar o nó cabeça, ela só tem como objetivo deixar igual quando saiu da inicialização
    //Exatamente por isso eu poderia colocar uma cópia invés de ponteiro aqui também

pont apagar;
end = l->cabeca->prox; //Tenho que começar depois do cabeça

while(end!=l->cabeca){ //Apago tudo até chegar de novo no cabeça
    apagar = end; //guardo o endereço que será apagado
    end = end -> prox; //vou pro proximo
    free(apagar) //apago
}
//Saiu do loop, só sobrou o cabeça, e agora faço ele apontar pra sí mesmo, como no incializar

inicializar(l);
// Prof fez "end -> prox = end;" invés disso

}







