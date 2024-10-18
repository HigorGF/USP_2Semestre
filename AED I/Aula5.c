//Lista Ligada
    //Também chamada de implementação Dinâmica
    //Não precisa salvar posição de memória
    //Mais fáceis de montar



#include <stdio.h>
#include <stdlib.h>

typedef bool int
typedef tipochave int


define false -1;
define true 0;



typedef struct
{
tipochave chave;
} registro;


//Elemento serpa um pouco diferente do da aula 4


typedef struct aux{
    registro reg;
    //apontando pro próximo
    struct aux* prox;
    //Preciso usar o AUX, já que o nome "Elemento" ainda não foi definido, mas na prática é a mesma coisa
    //de ponteiro para elemento
} Elemento, *Pont //EU consigo dar varios nomes direto para mesma estrutura, nesse caso eu dei o nome dela e 
//dei outro nome para o ponteiro dela
//Seria a mesma coisa de typedef Elemento* Pont;

typedef struct {
    //Diferente de um arranjo de registros, onde guardo posições disponiveis, aqui eu só guardo a "cabeça"
    //Cabeça é o inicio, o primeiro elemento da lista ligada
    pont inicio;

} Lista;




//Inicializando
Void Inicializar(Lista * l){
 l->inicio=NULL;
}

//Reforçando, o campo n elmentos é sempre bom existir, já que terei que contar  toda hora para saber o tamanho dela
//Mas está aqui de qualquer forma
//Tamanho
int tamanho(Lista l){ //Como a lista é um ponteiro, não tem custo nenhum eu passar uma cópia em relação à memória
    int tam = 0;
    pont pos = l.inicio; 
    while(pos){ //Nulo retorna falso, então isso é o meso while(pos!=null)
        pos = pos->prox;
        tam++;
    }
    return tam;
} //Isso é a estrutura basica de navegação em estruturas ligada, nada complicado



//Buscando
//Assumindo que esla está ordenada. no site da matéria tem uma função que não assume
pont buscaSeqOrd(Lista* l, tipochave ch){ //Podeira ser copia também
    pont pos = l->inicio;
    while(pos&&ch > pos->reg.chave) pos = pos->prox;//Como está ordenado, as condições é 1- Ter elemento válido e 
                                                    //2- A chave atual for menor que eu estou buscando (se for maior que dizer que já passou e não achou)

    
    if(pos&&pos->reg.chave == ch){ //A segunda condição aqui sozinho não funcionaria porque o pos pode ser NULO e NULO não tem NULO->reg.chave
                                   //Por isso a primeira é pra conferir se ela existe antes
        return pos;
    }
}   return false; //Se chegou aqui quer dizer que chegou no final e não achou



//Inserindo
//Mesmo problema do anterior, eu preciso saber o anterior para fazer ele apontar para o novo (isso também vale para exclusão)

//Como teremos que fazer uma busca, criaremos uma função auxiliar que terá que retornar a pos do valor (se ele existir)
// e terá que retornar também o valor que está antes (isso independente dele existir ou não)



//Mas como criar funções de dois retornos:
    //Na maioria das linguagens todas as funções retornam só um valor, inclusive no C
    //Tem uma estratégia, posso criar variáveis de as colocar como parametro da função
    //Dentro da função ela consegue editar as variáveis

//Exemplo função que retorna quadrado e cubo de um numero:

void qc(int x; int* quad, int* cubo){ //Literamente criando uma variável só para o retorno, sem ler o que está nela
 *quad = x*x;
 *cubo = x*x*x; //Cuidado para não confundir * de mutiplicação com de ponteiro 

 //Obs: C n tem operador de elevação (bib math tem a função power())
}

int main() {
int valor,q,c;
qc(valor,&q,&c);
//agora q é valor^2 e c é valor^3
}



//Agora voltando para função de busca auxiliar

point buscaAux(lista* l, tipochave ch, elemento ** ant){  //A atual vai ser dado no return, a segunda saída (o anteior) que será por variável
//Elemento ** é a mesma coisa de pont*, ou seja o ponteiro de um ponteiro
    //Nele que vou guardar o anterior

*ant = NULL; //Eu garanto que a variável que o usuario deu está com NULL, pra ai inserir coisa nela
pont atual - l -> inicio;
while(atual != null && atual -> reg.chave < ch){
    *ant = atual; //Vai andand sempre um pra trás do atual
    atual = atual->prox;
}
if(atual && atual -> reg.chave == ch) return atual; //mesma coisa da busca anterior
return null; //Caso não exista o valor, ele não retorna nada, mas o anterior continua sendo o mesmo se existisse,
                //Isso vai ser útil para inclusão
}


//Excluir (em ordem)
bool excluir(lista* l, tipochave ch){ //Como eu posso querer exlcuir o primeiro, que é o inicio, a
                                      //lista pode ser alterada, então precisa ser ponteiro obrigatoriamente
pont ant,i;

i = buscaAux(l,ch,&ant);
if(i==null) return false; //O elemento não existe, então false
// Exeção para o primeiro 1-
if(ant==null)l->inicio = i->prox; //Eu movo o inicio para o próximo, não apaguei nada ainda
//Essa é a parte que edita a lista em sí, por isso tem que ser como ponteiro no parametro

else ant->prox = i->prox; //Mesma coisa, apontei para o proximo sem exlcuir

//agora eu faço uma exclusão que serve para ambos os casos
free(i);
return true;
}



//Agora a inserção (em ordem)
//Sem repetição
bool inserir(lista* l, registro reg ){ //Precisa ser ponteiro pelo mesmo motivo da exclusão
    pont ant, i;
    i=buscaAux(l,reg.chave,&ant)
    if(i!=null) return false; //I tem que ser falso pra provar que o valor não é repitido
    //vo cirar o elemento novo com o malloc
    i = (point)malloc(sizeof(elemento));
    i -> reg = reg;
    //Inserção no primeiro
    if(ant == null){
        i-> prox = l->inicio; //Essa é a parte que edita a lista em sí, por isso tem que ser como ponteiro no parametro
        l-> inicio = i;
    }
    else{
        i-> prox = ant -> prox;
        ant -> prox = i;
    }
    return true; //Fez tudo
} 

//No geral de lista ligadas, eu preciso arrumar na inclusão o dobro de ponteiros que arrumei na exclusão
//Como foi nesse caso







