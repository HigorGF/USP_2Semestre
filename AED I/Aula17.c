//Já foi a prova
//Correção

//Arvores de busca binaria - Arvores binarias de busca ou arovres de pesquisa binária
    //Arvores binárias feitas para se realizar busca binária de valores
    
    //Elementos de cada nó terão uma regra: filhos maiores à direita e menores à esquerda
        //Isso incluindo a raiz.

    //Isso não é tudo, pois a arvore não necessariamente está equilibrada (bem distribuida)
        //Nesse caso ela não seria tão eficiente pois pode chegar a ser um N
            //Imagine uma arvore que está todo mundo só à direita
        
        //Existe uma arvore de busca binaria mais especifica ainda que possui inserções 
        //e exclusões certas para manter elas equilibradas e aproveitar da eficiente da busca


//Estrutura

//ELemento
typedef struct  aux{
    tipochave chave,
    struct aux *esq, *dir;
} NO, *Pont;
//Normalmente não tem uma estrutura "Arvore" em sí, só chamamos elas pelo ponteiro da raiz


//Busca
Pont buscabin(Pont r, TIPOCHAVE ch){
    if(!r) return false;
    if(r->chave == ch) return r;
    if(r->chave < ch) return buscabin(r->dir, ch);
    else return buscabin(r->esq, ch); //O else aqui nem é necessário pois acima já tem um else
}

//Pior caso é O de N


//Como a escolha é só direita ou esquerda, é relativamente fácil criar interativamente uma busca
    //Certas arvores precisam de estruturas auxiliares para serem iterativas


Pont buscaBinIte(Pont raiz, TIPOCHAVE ch){
    //Parecido com uma busca em lista ligada
    PONT atual = raiz;
    while(atual){
        if(atual->chave==ch) return atual;
        if(ch>atual->chave) atual = atual->dir; //Mesmos passos de uma lista ligada, mas tenho que conferir para que lado eu vou
        else atual = atual->esq;
    return false; // Passou e não achou
    }
    //Essa em complexidade temporal não muda tanto, mas em espacial economiza bastante
}
//Complexidade espacial é diferente da temporal
    //Temporal é a padrão, tempo de execução
    //Espacial é o quanto de memoria ela gasta
        //A espacial é muito forte em recurisvas, pois ela vai mutiplicando a memoria gasta a 
        //cada chamada, normalmente proporcional à altura
    //Interativas tendem a ocupar muito menos memória, pois não precisa dessa mutiplicação

    //TODA recursiva pode ser implementada, as vezes nem vale a pena por conta da
    //memoria das estruturas auxiliares


pont inserir(Pont raiz, TIPOCHAVE ch);
//A maneira mais fácil é fazer recursivamente a pergunta para cada nó até achar um espaço vazio
//Basicamente fazemos uma busca do valor até achar um nulo
    //Por consequência seria O(N) no pior caso também
//Lembrando que isso não garante o balanceamento da arvore
    //Imagine um usuario inserindo uma lista já ordenada


//Exclusão de elementos
    //Não tem de fato uma padrão, dá pra existir se combinar com o usuario
    //Mesmo problema da arvore anterior

    //Contudo existem certas maneiras óbvias:
    
    //As folhas é só excluir direto
        
    //Se a exclusão so for de um pai com filho único, poderia só substituir o pai pelo filho
    //e apagar o filho
    
    //Agora se for um pai com dois filhos temos um problema
        //Melhor colcar um sem filho no lugar, fica mais fácil substituir
        //Nesse caso apagamos o valor, sem apagar o nó, e subimos um dos valores abaixo (pode haver varios possíveis)
        //Mas escolher qual deles vai ou não quebrar a propriedade é complexo
            //Ou é o maior dos filhos à esquerda (menores) ou o menor dos da direita (maiores)
            //Ou seja, tudo da esquerda filhos da direita ou tudo da direita filhos da esquerda
        //No fim das contas é só uma substituição



