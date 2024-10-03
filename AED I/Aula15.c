//Continuando Arvores Binárias
    //Genérica, não se trata das de pesquisa ainda nem de hearp

    typedef struct aux{
        TIPOCHAVE chave
        struct aux *esq, *dir;
    } NO, *PONT;



    //Os elementos não estão ordenados



    pont buscar(PONT raiz, TIPOCHAVE ch){
        if(!raiz) return NULL; //Tratarei como recursivo, então essa é a condição de parada
        if(raiz->chave==ch)return raiz; //
        PONT res = buscar(raiz->esq,ch)//Guardo a resposta em um lugar só para não precisar chamar novamente
        if(res) return res;
        return buscar(raiz->dir,ch); //Aqui se ele não achar, ele já retorna o null, então já fica certo sem o IF

    };


    //função auxiliar para achar altura
        //só um calculador d e qual é maior
    int max(int a, int b){
        if(a>b) return a;
        return b
    }


    int altura(pont atual ){
        if(!atual) return -1; //Não pode ser 0 aqui pois isso dará conflito nas folhas. As folhas devem ter altura 0,  se eu já colocar o 0 ali será 0+1, e a altura ficara 1, o que está errado
        return max(altura(atual->esq),altura(atual->dir)) +1
    }
    //Isso é O(N)

//Tipos enumeráveis de dado
    //Você define valores possíveis, que são opções, tipo "1,2,3 ou 4" ou "Esquerdo ou direita"
    //Usaremos aqui

    typedef enum{esquerdo,direito} LADO; //criamos um tipo chamado LADO que pode ser do tipo direito ou esquerdo
        //Isso deixa o código muito mais legível, mas no fundo o computador só troca isso por valores numéricos mesmo

    //função auxiliar também
    PONT criarNo(TIPOCHAVE ch) {
        pont novo = (pont)malloc(sizeof(no)) //Criando um no
        novo->chave = ch; //coloco valor colocado
        novo->dir = null;
        novo->esq = null;
        return novo; //Novo criado e pronto para ser usado
    }
    

    bool inserirfilho(pont raiz, tipochave novaCH, tipochave chavepai, LADO lado){
        //Como não está ordenado o usuario define tudo
        //Precisa do ponteiro da raiz de inserção, o valor novo, o valo que o pai tem tem, e se vou inserir na esquerda ou na direita

        //Então eu procura como aquela chave o pai
        pont pai = buscar(raiz, chavepai);
        if(!pai) return false;

        //Se o valor já existe, não existe regra clara do que fazer ou boa prática
            //Isso exige combinação com o usuario
            //Nesse caso, não vamos apagar nem dar erro, vamos pegar o valor que está lá e colocar como filho do valor novo

        //Agora não tem loops, só colocar valores. Tudo O(1) a partir de agora

        PONT novo = criarNo(novaCH);

        if(lado==esquerdo){ //Usamos valor do enumerável como constante sem problema
            novo->esq = pai->esq //Aplicando caso já exista, aqui vamos colocar no esquerdo sempre, fica à combinar com o usuário
            
            //A gente nem confere se isso precisa ser feito, já considera que será

            pai -> esq = novo;
        }
        else{
            novo->esq = pai->dir;
            pai->dir = novo;
        }

        return true;
    }
    //isso tudo é O(N)


    //A exlcusão
    
    //Não tem combinado também nem convenção para quando você apaga um nó no meio ou a raiz
        //Isso é tão sem padrão que aqui nem será tratrado, fica a combinar com o usuário


    //Inicialização        

    void inicializar(no** raiz){ //Isso é o equivalente á PONT*
        *raiz = null;
    }

    //Inicializar é feito manualmente como no C, muitas orientadas à objetos já tem o contrutor que chama e inicializa a função automaticamente


    void criarRaiz(PONT* raiz, tipochave ch){
        *raiz = criarNo(ch);
    }

    //Feito, lembrando que o usuario precisa criar um Raiz antes



