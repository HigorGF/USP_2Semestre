//Continuando a exclusão da árvore binária de busca

//Vamo definir agora as funções auxiliares que ajudaram na exclusão



//Essa busca auxiliar, diferente da norma, vai retornar duas coisas, o return com a chave buscada e o ponteiro com o pai dela
PONT buscaNo(pont raiz, TIPOCHAVE ch, pont* pai){
    pont atual = raiz;
    *pai = NULL;
    while(atual){
        if(atual->chave==ch) return atual;
        *pai = atual;
        if(ch<atual->chave) atual=atual->esq;
        else atual = atual->dir;
    }
    return NULL; //se não achou retorna null, poderia retornar o atual mesmo que ele é null, mas assim fica mais claro do que se trata
}



//A gente também pode analisar a complexidade assintotica dessas funções, que todas são O(n) no pior caso


