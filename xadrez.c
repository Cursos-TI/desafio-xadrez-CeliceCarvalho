#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    int totCasasTorre = 5;
    int totCasasBispo = 5;
    int totCasasRainha = 8;

    // char direcaoTorre[10] = "Direita";
    // char direcaoBispo[20] = "Cima Direita";
    // char direcaoRainha[10] = "Esquerda";
    printf("Movimentacao da Torre\n");

    int casaTorre = 0; //inicialização da variável de controle da movimentação da Torre

    while(casaTorre < totCasasTorre){//estrutura de repetição while que irá acontecer enquanto casaTorre for menor que o total
        printf("Direita\n");
        casaTorre ++;//incremento na variavel toda vez que a peça andar uma casa
    }

    printf("Movimentacao do Bispo\n");

    int casaBispo = 0;//inicialização da variável de controle da movimentação do Bispo

    do{//estrutura de repetição while que irá acontecer enquanto casaBispo for menor que o total
        printf("Cima Direita\n");
        casaBispo ++;//incremento na variavel toda vez que a peça andar uma casa
    }while(casaBispo < totCasasBispo);

    printf("Movimentacao da Rainha\n");

    for(int casaRainha = 0; casaRainha < totCasasRainha; casaRainha++){//estrutura de repetição for (inicialização da variavel de controle;condiuçaõ de repetição;incremento)
        printf("Esquerda\n");
    }

    return 0;
}
