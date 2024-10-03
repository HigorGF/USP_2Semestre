//A depois dessa aula será só estruturas de árvores até o fim do semestre
    //Em AED II também vamos ver mais coisas

    //Esse é o ultimo conteudo que irá a primeira prova

    //Inserção Recursiva em Pilha
        //Retomando mais especificamente o que foi dito na aula anterior
        //A recursividade faz apenas todas os deslocamente "NECESSARIOS" para poder inserir
            //A não recursiva tenta deslocar todas de uma ponta até a o objetivo
        //É no geral mais rápida, mas no pior caso é igual

        //Não irei anotar os códigos pois eles já estão escritos e são redundantes


//Matrizes Esparsas (O último assunto)

    //Definição de matriz não muda
    //Só bidimensionais
    //Não precisa ser quadrada como na anterior

    //Esparsas -> possuem a maioria dos quadrados como uma valor padrão
        //Pode ser as que apenas 0s e 1s preenchem tudo
        //Podem definir relações boleanas pelos eixos
        //Podem servir para fazer imagens (só contornos pretos e brancos)
        //Entre outros
    //Existem muitas maneiras de otimizar para economizar memória
        //tem estruturas especificas para gerenciar isso
            //As vezes é necessário só guardar os valores diferentes do da maioria

//Na pratica será uma lista ligada em cada linha da matriz, só que irei excluir os valores triviais
    //Resumindo, um arranjo de listas ligadas onde só coloco os 1 e nenhum 0
    //A linha eu encontro pelo arranjo, mas a coluna eu preciso encontrar
        //Logo irei guaradar no proprio elemento qual a coluna dele além do prórprio valor
            //(Pois o primeiro elemento pode ser da coluna 0 ou da 10, não teremos a informação se não for desse jeito)


//estrutura matriz
typedef struct {
    pont* A; 
    //Isso é um Ponteiro de Ponteiro para um arranjo
        //Um inteiro que aponta para um arranjo de numeros (a quantidade de linhas) é
            // int* arranjo = (int*)malloc(sizeof(int)*x), sendo o x a quantidade de elem na lista (quantidade de linhas)
        //Como eu precio de algo apontando para ela, eu coloco um ponteiro para isso, sendo um ponteiro de ponteiro

    int linhas;
    int colunas.
}


//Inicializando
    //Ass: Matriz, col e lin

//Atribuir
    //Insere elemento novo
    //Troca
    //Apaga (Se ele colocar o valor trivial em algo que existe)
    //Não faz nada (Se ele colocar o valor trivial onde tem)
    //Isso tudo dependendo do valor

    //Ass: MAtriz, col, lin e float com o valor


//Acessar
    //Devo retornar zero (o valor trivial) se o valor não existe ( o que é uma reposta válida)
    //Ass: m,lin,col
    //Cuidado com cordenadas inválidas ou outros tipos de erros, o retorno 
    //pode ser confundido com um código de erro (pois -1 e 0 são valores válidos matematicamente)

    //Em resumo recebe o atual como A->[lin] e depois busca como uma lista ligada normal    




