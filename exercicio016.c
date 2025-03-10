/*
16. A empresa AJB paga R$10,00 por hora normal trabalhada, e R$15,00 por hora extra.
Faça um algoritmo para calcular e imprimir o salário bruto e o salário líquido de um
determinado funcionário. Considere que o salário líquido é igual ao salário bruto
descontando-se 10% de impostos.
*/

#include <stdio.h>

int main(){

    int horanormal, horaextra, imposto;
    float salario, salarioliquido;

    do {
        printf("\nInforme quantas horas trabalhadas no mes: ");
        scanf("%d", &horanormal);

        if (horanormal < 0) {
            printf("\nAs horas trabalhadas nao podem ser negativas. Digite novamente.\n");
            continue;
        }

        printf("Informe quantas horas extras no mes: ");
        scanf("%d", &horaextra);

        if (horaextra < 0) {
            printf("\nAs horas extras nao podem ser negativas. Digite novamente.\n");
        }

    } while (horanormal < 0 || horaextra < 0);
    
    salario = (horanormal * 10 + (horaextra * 15));
    
    salarioliquido =  salario - (salario * 0.10);

    printf("%2.f", salarioliquido);
    
}