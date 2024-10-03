//Matrizes
    //M linhas e n colunas
    //Representa diferente tipos de dados, seja imagens  ou números
    //Matrizes no computador não ficam salvas como matrizes de fato
        //Só por curiosidade, dentro da memoria elas estão uma em seguida da outra

//Pode criar com matriz[m][n]
//Ou posso alocar memoria vazias 
    //int** M = (int**)malloc(sizeof(int*)*2);

    //for(i=0;i<2;i++){
    //M[i] (int**)malloc(sizeof(int*)*3)}

    //Nesse exemplo fiz uma 2, 3. Simplemente criando espaços em um ponteio de ponteiro de inteiros

    //Por isso usamos o [x] para indicar DESLOCAMENTO DE MEMORIA, então se for uma matriz int
    //eu preciso deslocar [1] vezes posições de tamanho int para achar a segunda posição por exemplo
    //E o [0] eu não desloco nada por exemplo.

//Matrizes epeciais
    //Existem varios tipos de matrizes
    
    //Matriz quadradas m = n
    //Matrizes simetricas
        //Iguais com reção à diagonal principal
    //Matrizes Esparsas
        //matrizes que marcam 0 ou 1 para estabelcer relações
        //Muita das vezes ela é adapatdata para ficar mais eficiente
    //Entre outros


//As matrizes Triangulares Inferiores
    //Acima da diagonal principal (não a diagonal) são nulos
    //Mesma lógica da simetrica, eu não preciso guardar a parte de cima pois seria redundante
    //Vamos ver truques para entender como economizar memória dela

    //Irá ser criado um arranjo linear que terá um mapeamento referente às posições da matriz
    //Tem que ser quadrada para ter diagonal principal
    //Não terá M*N, será só um indice linear

//Exemplo da estrutura no slide


//Deveremos Inicializar uma matriz
//Atribuir (Inclusive substituir o valor)
//Acessar

//Inicializar
    //Usar o campo ordem 
    //Alocar memoria
    //Colcoar zero em todos os valores


//Calcuçar posção
    //A quantidade de valores que preciso guardar será pela formula
    //(N²-N)/2 + N (prof usou (1+n)*n/2 )

    //Para inserir então eu vou fazer uma PA de todos as linhas (M) e depois somar a coluna,
    //Então por exemplo, se eu quero colocar 7 na minha "matriz" na posição 4,2

    //Farei x igual a soma "de 1 até lin - 1", que é "1 até 6 - 1" que tem como soma 6
    //Pego o 6 e somo a col que é 2, isso dá 8
    //Como o array começa no zero e as matrizes no 1,1, eu diminuo 1 de x para calibrar
    //Então coloco na posição array[x], que sera 7. 
    //Lembrando que se ele tentar inserir acima da diagonal principal dará erro.


//Atribuir valor
    //Se tiver acima da diagonal principal, retorna rerro
    //calcular a posição correpondente e colocar array[pos] = valor colocado

//Acessar valor
    //Se tiver acima da diagonal, retorna zero
    //Caso contrario, a gente retorna no valor correspondente
    //Cuidado com o que retornar se o input for invalido, -1 é um valor valido matematicamente 
    //e talvez não seja entendido como um erro, combinar com usuario


//Obs* Não anotei códigos de exemplo, ver no slide


//Apendice de Recursividade
    //Recursividade na aula de pilha mútipla é possível e economzia processo
    //O pior caso possível continua o mesmo, mas ele só move quem precisa mover
    //Ex Deslocar para direita:

    //If(Não estou cheio || delocarparadireita(prox)){
    // Me movo e retorno true}
    //Else retorno false
    
    //Note que a recursividade está na chamada boleana, a ordem do "OU ||" importa
    //Tenho que retornar true para falar pra proxima que consegui me mover e consequentemente
    //Mover as adiantes à mim.

    





