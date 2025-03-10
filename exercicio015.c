/*
15. Alguns países medem temperaturas em graus Celsius, e outros em graus Fahrenheit.
Faça um algoritmo para ler uma temperatura Celsius e imprimí-Ia em Fahrenheit
*/

#include <stdio.h>

int main(){

    float celsius, fahrenheit;

    printf("Informe a temperatura em Celsius que tranformarei em Fahrenheit: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("%.2f Fahrenheit", fahrenheit);
}