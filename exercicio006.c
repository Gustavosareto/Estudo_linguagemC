/*
4. Faça um algoritmo que recebe dois valores representando as medidas da base e da
altura de um triângulo qualquer e exiba a área deste triângulo.
*/

#include <stdio.h>

int main(){

    float base, altura, area;

    printf("Informe o valor da base do triangulo: ");
    scanf("%f", &base);

    printf("Informe o valor da altura do triangulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("Com base nas informacoes passada a area do triangulo equivale a %.2f cm ao quadrado", area);
}