// 05/08

//Informações Gerais

//bibliotecas usadas
//#include <stdio.h> -> Standart Input e Output
//#include <stdlib.h> -> Standart Library

//Funções básicas 
// o Asterico (*) serve para indicar que é uma referência à aquilo (um endereço de memória)
// o & serve para pegar o endeço de memória de uma variável

//Funções de variável por cópia funcionam diferententemente das por referência
    //As por referência alteram os valores globalmente (Fora da função)
    //As por cópia não alteram
//Assinaturas de funções descrevem as propriedades báscas delas (Nome,Argumentos e o Tipo de Retorno)

//Estrutura que será usada de exemplo nas aulas
typedef struct aux
{
    int cpf;
    int idade;
    struct aux* conjuge;
}pessoa;

void envelhecerI(pessoa p){
    p->idade ++;    //Não altera o original e não retorna, não funciona
}

void envelhecerII(pessoa* p){
    p.idade ++;    //Não vai funcionar pois o "." não funciona com endereços de memória (ou seja, mesmo usando &)
}

void envelhecerIII(pessoa p){
    p.conjuge->idade ++;    //Funciona
}


void envelhecerIV(pessoa* p){
    p->conjuge->idade ++;    //"Se utilizar o & funciona"
}
