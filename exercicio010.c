/*
8. Faça um algoritmo para um terminal de auto-atendimento bancário que realiza
saques em dinheiro. O programa deve solicitar ao usuário qual o valor a ser retirado e
deve exibir na tela qual a quantidade de cada cédula será entregue ao usuário. O
programa sempre deve tentar utilizar o menor número possível de cédulas. A máquina
possui apenas cédulas de R$ 10, 5 e 1. Você deve exibir as variáveis que contem a
quantidade de cédulas na seguinte ordem: 10,5,1.
*/

#include <stdio.h>

int main(){

    int nota10, nota5, nota1, valorsaque;

    do
    {
        printf("Informe o valor que deseja sacar (somente cedulas de 10, 5 e 1): ");
        scanf("%d", &valorsaque);

        if (valorsaque <= 0)
        {
        printf("O valor do saque nao pode ser menor ou igual a 0\n\n");
        }
    } while (valorsaque <= 0);
    
    

    nota10 = valorsaque / 10;
    valorsaque %= 10;

    nota5 = valorsaque / 5;
    valorsaque %= 5;

    nota1 = valorsaque;

    printf("%d nota de 10\n %d nota de 5\n %d nota de 1", nota10, nota5, nota1);
}