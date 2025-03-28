#include<stdio.h>
#include <math.h>

int main(){

    float vetorCubo[5], vetor[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Informe valores inteiro : ");
        scanf("%f", &vetor[i]);

        vetorCubo[i] = pow(vetor[i], 3);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%3.2f\t", vetorCubo[i]);
    }
    
    
}