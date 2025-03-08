/*
1. Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a
sua média ponderada (as notas tem pesos respectivos de 1, 2 e 3).
*/

#include <stdio.h>

int main(){

   float nota1, nota2, nota3, media;
   int peso1 = 1, peso2 = 2, peso3 = 3;
   
   do
   {
        printf("Informe a primeira nota: ");
        scanf("%f", &nota1);
    
        if (nota1 > 10)
        {
        printf("O valor da nota nao pode ser maior que 10\n\n");
        }
   } while (nota1 > 10);
   
   
   do
   {
        printf("Informe a segunda nota: ");
        scanf("%f", &nota2);
    
        if (nota2 > 10)
        {
        printf("O valor da nota nao pode ser maior que 10\n\n");
        }
   } while (nota2 > 10);


   do
   {
        printf("Informe a terceira nota: ");
        scanf("%f", &nota3);
    
        if (nota3 > 10)
        {
        printf("O valor da nota nao pode ser maior que 10\n\n");
        }
   } while (nota3 > 10);

    media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

    printf("Media final: %.2f", media);

}