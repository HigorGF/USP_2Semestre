//Percurso em Árvore
    //Já fizemos mais ou menos isso em outros algoritimos

//Exemplo, vamos usar divisão e conquista para exibir uma arvore
//Isso exemplificará certas diferenças e como manipulamos a passagem da arvore

void exbiir(pont raiz){
    if(!raiz)return;
    //1- Podemos colocar o printf aqui, que é o primeiro caso
    exbiir(raiz->esq);
    //2- Podemos colocar aqui, que é o segundo caso
    exbiir(raiz->dir);
    //3- Ou aqui
}
//Parece que não, mas isso muda como a arvore será exibida, por mais que em todos ela printará tudo

//Primeiro caso é o Preordem,processamento antes da chamada recursiva, bem comum em busca pois o problema pode ser resolvido antes.

//O segundo é Em-ordem, que é entre a chamadas recrusivas

//Pós-Ordem, é pós as chamadas recursivas.


//Exemplo de execução, supondo uma arvore de 3 de altura

//1- Caso, imprimo atual e depois chamo a esq e depois a direita
//Raiz, Raiz->Esq, Raiz->Esq->Esq, Raiz->Esq->Dir, Raiz->Dir, Raiz->Dir->Esq, Raiz->Dir->Dir
//Vou descendo e printando, priorizando sempre ir a direita, e depois subo.

//2- Caso, chamo o esquerdo até onde dá, imprimo, e depois chamo a direita
//Raiz->Esq->Esq,  Raiz->Esq, Raiz->Esq->Dir, Raiz, Raiz->Dir->Esq, Raiz->Dir, Raiz->Dir->Dir
//Como é uma arvore binaria de busca, a ordem dos elementos será ordenada pois é exatamente o caminho de busca

//3-Caso, chamo ambos recursivamente e depois imprimo
//Raiz->Esq->Esq, Raiz->Esq->Dir, Raiz->Dir->Esq, Raiz->Dir->Dir, Raiz->Esq, Raiz->Dir, Raiz
//Aqui eu começo imprimo todas as folhas da esquerda pra direita e depois imprimo
////Observe como ela ficou da esquerda pra direita, de baixo pra cima.


//Analiando a compleixdade assintotica T(n) = 2*T((n-1)/2) se em uma arvore totalmente desbalanceada e se for totalmente balanceada T(n-1)+1, e independente disso será teta(N) nos dois casos

//Memória será diferente, pois quando você chama uma ponta você já muda ela pra null e começa um log


//Isso pode ser feito iterativamente com mesma complexidade de processamento(Pela teoria sempre dá pra fazer isso, mas lembrando quo o contrário nem sempre)
    //Isso PODE economizar memória, nesse caso exemplo não vai

//Como demonstração usaremos o preordem, faremos iterativa invés de recurisva

//Obs*: Recursão de Cauda é aquela que a chamada recursiva é no final e única (ou semelhante como na busca binaria.Nesses casos é mais fácil transformar em iterativo pois isso pode ser convertido em um laço intuitivamente.
//Caso o contrario, como esse, é provavel que precisaremos de uma estrutura auxiliar


//Não vai ser um código mais simples, menor, muito menos mais fácil de dar manutenção, normalmente não faremos isso em uma empresa.
//Professor está mostrando isso pois em certos casos não existe função recursiva equivalente, e isso demonstra como ela funciona.
    //Também existem casos extremos que a pilha de execução recursiva padrão pode estourar, e você precisa fazer isso pra poder definir explicitamente o tamanho dela

//A primeira coisa então é fazer a estrutura auxiliar, que nesse caso é a pilha.

void exibirPreordemIterativo(pont raiz){
    if(!raiz) return; //Se não existe
    PILHA pi;
    inicializarpilha(&pi);
    push(raiz,&pi); //Isso aqui é paralelo a execução recursiva. No fim das contas chamar recursivamente uma função similar a adição em uma pilha de um novo problema para ser resolvido posteriormente
    Pont atual;

    while(!estavazio(&pi)){
        atual = pop(&pi); //Pego ele da pilha (excluo ele de lá) e começo a processar
        printf("%i",atual->chave); //Processo
        //Coloco o proximo na pilha
        if(atual->dir) push(atual->dir,&pi); 
        //Preciso primeiro inserir o da direita para depois o da esquerda, pois ai o da esquerda fica primeira como vimos
        if(atual->esq) push(atual->esq,&pi);
    }
    //Terminei se cheguei aqui. a execução será igual.
}
//Analisar compelxidade de algo iterativo é muito complicado pelo código.
//O while da pilha é muito caótico, pois você não tem certeza da lógica, é preciso fazer uma analise mais profunda (É O(N))

//Com relação a complexidade de memória não mudou nada (até piorou a constante), pois a esturura auxiliar ocupa a mesma memória, todo N passa por ela. 
//As vezes a memoria pode ser pior ou melhor que no recursivo, depende.


//PROFESSOR DISSE QUE PODE CAIR NA PROVA