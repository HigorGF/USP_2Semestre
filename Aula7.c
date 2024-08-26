//Diferença Ordenada, de Pilha e Fila
    //Pilha e fila não são ordenadas
    //Fila possui uma estrutura em que as aplicações ordenam algo de modo que o ultimo que chega é o ultimo que sai
    //Já na Pilha é o oposto, o ultimo que chega é o primeiro que sai
        //Nesses casos de fila e pilha, a busca será O(N), pois está desordenado, contudo a inserção
        //e a exclusão 

//Pilha
    //Terá uma marcação em cada registro indicando qual é o topo


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
{
tipochave chave;
//... Aqui pode ter N informações
} registro;

typedef struct {
    registro A[max];
    *int topo; 
} pilha //Vamos chamar de Pilha invés de elemento

//Incializando
void inicializar(pilha * p){
//O topo deve sempre apontar pro
p->topo = -1;//Para facilitar o código, adotamos -1 na inciialização
//Isso acontece porque dessa forma, eu sempre posso colocar um valor em [topo +1], e ira condizer com o indice
//do arranjo

}

//Lembrando que todas essas estruturas são estaticas, ou seja, o tamanho que você oucupa é definido anteriormente
    //Então ou você coloca muito espaço alocado pra ter certeza que cabe tudo (e ai você disperdiça memoria)
    //Ou você coloca pouca para não disperçar (e ai o usuario fica limitado na quantidade)


//inserir

bool inserir(pilha* p , registro reg){ //Irei alterar o topo, não pode ser cópia
    if(p->topo==max-1) return false; //se tiver lotado eu não insiro

    //Na pilha a gente não confere se já existe ou não, então sempre cuidado se isso dará problema
    //na aplicação ou não

    p->topo++;

    p->a[p->topo] = reg;
    //Acesso a posição do topo do meu arranjo e coloco lá o arranjo
    return true;

  //  A complexidade disso é O(1), pois é constante
}

registro r1; //Aqui é onde eu poderia receber uma exclusão (Leia e depois volte aqui)

//A exclusão é muito semelhante
bool excluir(pilha* p, registro* reg){ //Irei alterar o topo, não pode ser cópia
    if(p->topo==-1) return false; //se tiver vazio não tem como excluir

    //Devemos mostrar quem estamos excluindo, pois o usuario não saberá
    //Lembre-se que estamos sempre excluindo o ultimo colocado

    //Então terá dois parametros, qual pilha deverá ter uma exclusão e qual receberá o elemento excluido 

    *reg = p->a[p->topo]; //Coloco o excluido no parametro
    p->topo--;

    //Está feito, não preciso alterar o valor antigo, na proxima inserção ele será excluido

    return true; //Eu não posso aproveitar desse return como parametro, pois já combinambos que esse return
    //é apenas para avisar se a operação foi bem sucedida ou não (true/false);

   // A complexidade  também é disso é O(1)
}

//Glossario: PUSH é o mesmo de inserir em uma pilha
//Assim como POP é a exclisão em uma pilha
    //O pop também define a exclusão que retorna o ultimo elemento (o elemento exlcuído)


//Busca em pilha
    //Raramente alguém faz busca em pilhas, então não vamos complicar muito, será sequencial
int buscaSeq(pilha* p, tipochave ch){ //Pode ser uma cópia, mas a memória fica na estrutura, então não vale a pena pois seria um peso maior
i = p->topo;
while(i>=0){ //i>0 é só pra ver se chegou no p->topo = -1, que significaria que acabou
if(p->A[i].chave = ch) return i;
i--;
}
return false //Passei por todos e não achei.
//Essa aqui diferente das demais é O(N).

}

//No geral essa estrutura é muito rápida já que são O(1) na inserção e na exclução
//mas só serve para aplicações específicas, e não são tão focadas em buscas já que são O(N)
//Em memória eles ocupam tudo que vão usar no momento de criação



//Segunda parte da aula




