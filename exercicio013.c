/*
13. Construa um algoritmo para calcular a distância entre dois pontos do plano
cartesiano. Cada ponto é um par ordenado (x,y).
*/

#include <stdio.h>
#include <math.h>

int main(){

    float resultado;
    int x1, x2, y1, y2;

    printf("Valor do ponto X1: ");
    scanf("%d", &x1);

    printf("Valor do ponto Y1: ");
    scanf("%d", &y1);

    printf("Valor do ponto X2: ");
    scanf("%d", &x2);

    printf("Valor do ponto Y2: ");
    scanf("%d", &y2);

    resultado = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("A distancia entre A e B e %.2f", resultado);
}