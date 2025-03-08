/*
1. Faça um algoritmo que solicita ao usuário um número real e exibe na tela a metade do
número digitado.
*/

#include <stdio.h>

int main(){
    int num;
    float metade;

    printf("Informe um valor real: ");
    scanf("%d", &num);

    metade = num / 2.0;

    printf("%.2f", metade);
}       