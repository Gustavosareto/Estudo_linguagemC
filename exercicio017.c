/*18. A granja galinha feliz possui um controle automatizado de cada frango da sua
produção. No pé direito do frango há um anel com um chip de identificação; no pé
esquerdo são dois anéis para indicar o tipo de alimento que ele deve consumir. Sabendo
que o anel com chip custa R$4,00 e o anel de alimento custa R$3,50, faça um algoritmo
para calcular o gasto total da granja para marcar todos os seus frangos.*/

#include <stdio.h>

int main(){

    int galinhas;
    float chip, anel, valortotal;
    
    printf("Informe quantas galinhas existem em seu galinheiro: ");
    scanf("%d", &galinhas);

    chip = (galinhas * 4);
    anel = (galinhas * 3.5);
    valortotal = chip + anel;

    printf("\nO total que ira gastar com chip sera de R$ %.2f \nanel de alimento R$ %.2f \nsomando tudo saira no valor de R$ %.2f", chip, anel, valortotal);

}