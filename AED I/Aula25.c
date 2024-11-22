//Mesma lógica da aula passada
//Agora esuqerda direita


//Continuando na mesma função:

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
    
    
    //Agora de fato a parte LR
    //Nesse caso u->bal vai ser 1, logo é o else daquela condição do LL
    p->dir = v->esq; //Imaginei  p->dir = v->dir
    u->esq = v->dir; //Imaginei  u->esq = v->esq
    v->esq = u;
    v->dir = p;
    //Pelo slide fica "BCDA", Mas eu imaginei "BDCA", tenho que rever isso
    
    //U e P vai ter balanceamento alterado dependendo do V antigo, já que podia ser -1/0/1
    if(v->bal == -1) p->bal = 1;    //Pois ai P vai ser B = h-3 - (h-4)
    else p->bal = 0;                //Pois ai P vai ser B = h-3 - (h-3)
    if(v->bal == 1) u->bal = -1;    //Pois ai U vai ser B = h-4 - (h-3)
    else p->bal = 0;                //Pois ai U vai ser B = h-3 - (h-3)
    //Lembrando que B é sempre H direita - H esquerda

    v->bal = 0; //Agora sim posso alterar o V para 0

    return v;
}

//Essa é toda rotação LR LL, que obivamente é espelhado dir e esq dos RR e RL. Por isso não veremos elas nas próximas aukas


//Na remoção tem um caso extra, e várias propriedades.
    //Normalmente a exclusão também nem era consdierado um problema, não era preucupação daqueles que desenvolveram.
    
