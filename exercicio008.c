/*
6. Faça um algoritmo que solicite ao usuário o valor do salário do mesmo e a
porcentagem de aumento. Exiba o valor do aumento e o valor do salário acrescido do
aumento.
*/

#include <stdio.h>

int main(){
    float salario, aumento, salarioaumento, porcentagem;

    do
    {
        printf("Informe o valor de seu salario atual: ");
        scanf("%f", &salario);

        if (salario <= 0)
        {
            printf("Salario nao pode ser menor ou igual a 0\n\n");
        }
        
    } while (salario <= 0);
    

    do
    {
        printf("Informe a porcentagem que recebera de aumento salarial: ");
        scanf("%f", &porcentagem);

        if (porcentagem <= 0)
            {
                printf("Salario nao pode ser menor ou igual a 0\n\n");
            }
    } while (porcentagem < 0);
    
    
    aumento = salario * (porcentagem / 100);
    salarioaumento = salario + aumento;

    printf("Salario inicial era de R$ %.2f recebeu %.2f porcento de aumento, agora o valor total com o aumento acrescido R$ %.2f diferenca do salario antigo R$ %.2f", salario, porcentagem, salarioaumento, aumento);
}