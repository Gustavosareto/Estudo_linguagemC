/*
3. Faça um algoritmo que calcule a velocidade média de um trajeto com base na
distância percorrida e no tempo (em decimal) usado para isso.
*/

#include <stdio.h>

int main(){
    float velomedia, distancia, tempo;

    printf("Informe qual a distancia percorrida (Em Km): ");
    scanf("%f", &distancia);

    printf("Informe o tempo que levo para percorrer a distancia final (Em horas): ");
    scanf("%f", &tempo);

    velomedia = distancia / tempo;

    printf("A velocidade media que do trajeto com base na distancia percorrida e no tempo sao de %.2f km/h", velomedia);
}   