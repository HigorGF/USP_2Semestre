//Estrutura não sequencial
    //Listas ligadas
    //Existem muitas maneiras, terá que ser dividido em várias aulas 
    

//Eu altero as referéncias, e não os valores em sí
    //Meio que mudo "quem aponta pra quem"


//Aplicada principalmente no disco rídigo (Assunto de AED II)


//Como os valores são definidos por referências eu consigo salvar valores dentro de
//qualquer casa livre, mas para ter um controle eficiente de qual elemento está livre ou não
//eu crio uma lista simuntanea que salva qual o primeiro disponível.
    //Caso o contrário eu teria que varrer a lista inteira para achar um elemtno livro antes de colocar
        //(imagina um OS varrendo todo disco toda hora que for fazer isso, seria muito lento)


//Definindo constantes do código


//Lembrando que problemas de organização de dados não importam para o usuário, isso é foco do programador
//Então tanto faz o registro, quem define não é a gente

#define max 50
#define erro -1
#define true 1
#define false 0
typedef int bool; //funciona exatamente como um inteiro, mas é boa prática
typedef int tipochave; //assim como o de cima, é uma boa prática

#define invalido -1
typedef struct
{
tipochave chave;
//... Aqui pode ter N informações
} registro;

typedef struct 
{
    registro reg;
    int prox; //Proximo campo com informação
} elemento;

typedef struct {
    elemento A[max];
    int ini; //Elemento inicial
    int dispo; //Inteiro com a posição do primeiro inteiro disponível

    //O campo número de elementos aqui nesse caso é opicional, pois eu vou ter que percorrer a lista
    //para achar o elemento vazio, mas no geral é uma boa prática ter pois pode ser uma informação importante
    //que nem sempre é bom calcular do zero
} lista;



//Vamos então inicializar a lista do zero

incializar(lista * l){
    int i; //Só declarando fora para seguir a estrutura primordial do C
    for(i=0;i<max-1;i++) l->A[i].prox = i+1; //Aqui eu estrou entrando em todos os elementos da minha lista e 
                                             //dentro de todos os registros e os zerando.
    l->A[max-1].prox = invalido; //O ultimo elemento não pode ter próximo, então eu já zero manualmente
                                //(Observe que ele está fora do for)
    l->ini = invalido; //Primeiro valor fica sem nada
    l->dispo = 0; //Poderia ser qualquer um, mas melhor escolher zero
}

//Vamos ter que fazer uma função que conta quantos elementos têm já que não estamos salvando

int tamanho(lista* l){ //Obivamente conta só os lugares com valores
    int i = l->ini;
    int tam=0;
    while(i!=invalido){ //Enquanto não for o último
        tam++;
        i = l->A[i].prox; //vou para o proximo valor
    }
    return tam;
    //Totalmente pior, seria melhor salvar a quantidade
}


//Inserção

//Lembrando que vou mudar a referência, então eu preciso saber quem é o meu anterior, 
//já que terei que editar ele pra apontar pro meu valor novo

bool inserir(lista* l, registro reg){
    if(l->dispo==-1) return false;  //Se a lista tiver cheia o dispo acaba virando -1. 
                                    //E como eu não quero inserir nada na lista cheia eu retorno esse erro
    int ant = invalido; //Faço o loop guarando quem está atrás dele
    int i -> l->int; //Quem eu vou iterar
    while(i!=invalido && l->A[i].reg.chave<reg.chave){ //Duas condições 1- O i não pode ser invlido poruquê isso signifca que ele chegou no final. 
                                                                    // 2- Não entendi
    ant = 1; //Vou andando cada um da lista
    i = i -> prox; //Arrumar isso
}
    if(i!=invlaido && l-A[i].reg.chave==reg.chave) return false
    i=l->dispo; //Pos do novo elemento (Não devia ter usado o I aqui, pois ele signifca algo diferente)
    l->dispo = l->A[l->dispo].prox;
    l->A[i].reg=reg;

    //Conferir se é o primeirpo
    if(ant==invalido){
        l->A[i].prox=l->ini;
        l->ini=i;
    }

    //Se não for o primeiro
    else{
            l->A[i].prox=l->A[ant].prox; //trocar antes de inserir
            l->A[ant].prox=i; //Inseri
    }
    return true
}
//Existem 3 tipos de casos que podem varias
//1- Incluir no inicio
//2- Incluir no "meio"
//3- Incluir no fim
//Esses casos podem, e normalmente vão precisar de um tratamento próprio, como foi nesse caso, que precisei
//especificar o inicio.




}
