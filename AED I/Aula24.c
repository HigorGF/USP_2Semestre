//Fazendo a regra
//Se um nó viola a regra (independe de quantos violarem) eu inicio a rotação
//A rotação sempre arruma todos

//Altura da filho à direita menos a altura do da esquerda vai ser o numero de balanceamento
//Se em algum momento for inserido um nó que deixe outro com balancemanto -2, existe um erro.
    //Esse erro vai ativar a rotação.

    //Depois de inserir um nó, todos esses parametros dos anteriores vão sendo alterados recursivamente durante a subida
        //Se eu chamei para esquerda, e voltou avisando que a altura aumentou, seu sei que o balancemento vai ficar com -1

        //Dessa forma eu consigo achar o problema, P U e V

//Agora hora de alterar, 

//Na rotação LL, V<U<P
    //O V pode ter -1,0,1 dependendo como a arvore foi constuida.
    //o U será -1 e o P -2

    //Temos algumas alterações para fazer.
        //O filho a esquerda do U vai ser P
        //O filho antigo à esquerda do U vai virar filho da direita do P (Se tiver)
        //Quem apontava para P vai apontar para o U.
        
        //Nota que a conta de saidas e entradas de ponteiros sempre bate.
            //Realizando os calculos de altura, note que o balanceamento é 0 e todos os H reduzirão em 1 para cada nó após a rotação.
        //Note também que nesse caso LL, nenhum ponteiro de V é afetado. Nos outros casos terá mudanças


    //ex: do código

    pont rotacaoL(pont P){ //Ela também aborda o caso LR em um ELSE, mas só na próx aula (Por isso o nome é só rotacao L)

        pont u,v; //V n vai ser usado nessa parte
        u = p->esq;
        if(u->bal == -1){ //Se for LL, pois -1 é pesadno pra esquerda (Ou seja, o V ta na esquerda)
            p->esq = u->dir;
            u->dir = p;
            p->bal = 0;
            u->bal = 0;
            return u;
        }
    }   //É impossível o U ser 0, pois se ele é zero não tem problema abaixo dele, ele está balanceado.
        //Na remoção isso é possível, pois o outro lado pode ter diminuido e ter desbalanceado um lado que estava balanceado.

