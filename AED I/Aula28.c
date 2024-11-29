//Mostrar e garantir que a altura da árvore será logn

//Busca será O(H)
//Inserção O(H)
//Exclusão O(H)

//Criando uma tabela analisando a altura de uma arvore qualquer (não necessariamente avl)
// H | min nos | max nos | min avl
// 0    1           1       
// 1    2           3       
// 2    3           7
// 3    4           15

//Ou seja, o máx é sempre o dobro do anterior + 1 (2^H+1 - 1)
//O menor numero possível então é H, e o pIor é 2^(h+1)


//Isso resulta em log2n <= h < n






//Criando uma tabela analisando a altura de uma arvore qualquer (não necessariamente avl)
// H | min nos | max nos | min avl
// 0    1           1       1       
// 1    2           3       2
// 2    3           7       4
// 3    4           15      7
// h    h+1       2^(n+1)-1 x


//Esse X sempre segue um fibbonacii, ele pega uma arvore anterior, coloca de um lado e uma arvore duas anteriores e colocada do outro lado mais a raiz.

//Isso é NosAVLmin(h) = NosAVLmin(h-1) + NosAVLmin(h-2) + 1
//Algum matematico já calculou isso sem ser recusivo e é 1,61803^h, que é a porporção áurea.


//O mínimo não vai mudar, contudo o pior caso pode, é garantido que ela não chega a N, fica propocional a logN

//Isso resulta em 1,61803^h < n < 2^h+1
//Para isolar o h, tiramos log, h < log1,618 (n)
//Pela propriedade de log isso é log2 n < h < 1,44*log2 n
//Ou seja, o melhor caso foi melhorado muito


//No fim, temos provado uma estrutura que é Dinamica, pedemos alocar memoria
    //Diferente do arranjo

//Inserção exclusão e busca em O(logN)
    //Difrente das arvores de busca não binarias 


//Counting Sort ocupa muita memoria, o merge e o heap fazem ele sendo nlogn e economizando memória
//Contudo a Avore AVL é ainda melhor, ele acha mais rápido ainda
    //Imagine um ID para cada pessoa no mundo, 8.200.000.000, sendo 64 bytes cada, terei 65 GB
    //Imagine que aumento mais dados disso e chego em 650 Gigas (estamos falando de RAM)
    //Agora se eu procurar nesses 650 Gigas com uma arvore AVL, será log2 6,5* 10^12
    //Que será simplesmente 40, ou seja, terá 40 operações (paticamente instantâneo) para o mais díficil de achar.
    //Moral, a memória principal consegue achar praticamente qualquer coisa que você colocar nela instantaneamente (até porque foi exagerado colocar 650GB nela).

//A limitação agora é o tamanho da memória, não a estrutura (Não tem muito o que mudar assintoticamente além disso). Esse é o ápice da Inserção, exclusão e busca 
//Mas eu tenho problemas maiores que a minha memória. Isso terá que ser guardado no disco, mas a estrutura no disco deverá ser difrente.


//Isso será a matéria da segunda parte de AED 2.

//A primeira parte de AED 2 ainda será em memória principal, mas o que alterar a esturutra?
    //Estrutura que guarda Relações de nós, não só guardar os nós.
    //Será um dado mais compelxo, não limitado a buscar, inserir e excluir.
    //Ex algoritimo de Rota


