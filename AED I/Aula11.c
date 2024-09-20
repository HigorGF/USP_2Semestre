//Código Grande nessa aula
//Mútiplas Pilhas

//Pode ser um arranjo de estruturas tipo pilha
    //Isso pode ser usado para qualquer estrutura


//Mas na implementação dinamica, eu sempre tenho um ponteiro para o próximo pois e isso
//ocupa memória

//Já na estatica muitas vezes eu posso economizar (por mais contráditório que isso seja)
    //Ele ocupa já tudo que precisa na ordem.


//A estrutura será semelhante a da pilha dupla, mas sem limite de 2
    //Terei N ponterios topo para cada uma das pilhas, tudo sequencialmente
    //Invés de salvar em um cabeça, será melhor colocar em um arranjo de controle
    //Cada espaço terá um inidice para bazse e um para o topo

//Código de exemplo no slide
    //Variavel de numero máximo de pilhas "NP"

#define np 4

typedef struct{
    tipochave A[MAX];  //Não precisa ser um registro, as vezes pode estrutura só como uma chave
    int base[NP+1]; //Tem que ser mais um, não terá ninguém lá, Isso vai facilitar a lógica do código
                    //Exemplo, quando eu for inserir eu tenho que saber quando uma acaba e outra começa
                    //Isso facilita loops com próximo, pois até o ultimo elemento de fato terá um "Prox"
    int topo[NP+1];
}


//Inicialização vai de 0 até NP, preenchendo base topo
    //para base, calculamos a posição de cada espaço da pilha (i*(MAX/NP))
    // E o topo será a base -1
    //Ex com np 4 e MAX 8
    //0,    2,  4,  6,  8
    //-1,   1,  3,  5,  7


//Tem algumas subfunções para ajudar outras


//Exclusão
    //Rápido, diferente da inclusão que pode ser lento
    //3 Parametros
    //qual mutipilha
    //qual pilha
    //qual variavel vai receber o valor excluído (Lembrando que nesse caso aqui é tipochave e não reg)
//Codigo no slide
//O(1)

//Note que ele não apaga de fato, ele simplesmente ignora a posição, isso é comum em estruturas
//estaticas. Em uma futura inserção ele será sobrescrito naturalmente.


//Função mover para esquerda e mover para direita (Auxiliares)

//Para mover pilha a, eu não posso ficar fazendo uma loop da esquerda para direita com IF, eu vou
//diretamente mudando tudo que está a direita da onde eu quero e se uma for movível, todas serão
    //As vezes pode ser ineficiente fazer dessa forma, (pois imagina se era só necessario mover a lista seguinte)
    //contudo, se eu fosse fazer de outra forma seria n², invés de n


//As unicas diferenças da esquerda pra direita é que
    //COnfiro se a anteiror está cheia invés da atual
    //Movo tudo da esquerda pra tras invés da direita pra frente



//Inserção
    //Vejo se está cheio primeiro
        //Se não tiver, vamos tentar inserir normal,
    //Se não der, tento mover tudo da esquerda pra direita, e ver se acho espaço
    //Se também não der, tento da  direita da esquerda
    //Caso nenhum deu, ta tudo cheio, então não tem com inserir e retorna falso.
    
    //Se ela passou de todos os if e chegou na outra parte do código, é inserção normal de pilha
        //p->topo[k]++; aumento o topo
        //p->A[p->topo[k]] = ch; coloco o valor lá.
        //return true

//No pior caso é O(N-1)
    //Ineficiente comparado com as outras pilhas normais, economiza memória mas a inserção é o que quebra
//No melhor é O(1)
    //Se tiver espaço na pilha que quero adicionar
    //Conforme vai aumentando os registros vai ficar mais díficil, pois tem mais chance de ter que mover tudo


