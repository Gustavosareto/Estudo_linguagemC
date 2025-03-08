/*
5. Faça um algoritmo que calcula os gastos com combustível em uma viagem. O
algoritmo deve solicitar ao usuário a distância a ser percorrida em Km, o consumo do
carro em Km/litro e o preço do litro do combustível. Como resposta o programa deverá
informar qual o valor em R$ a ser gasto com combustível na viagem.v
*/

#include <stdio.h>

int main(){

    int distancia;
    float consumo, precolitro, valortotal;

    do
    {   
        printf("Informe quantos Km irar percorrer nesta viagem: ");
        scanf("%d", &distancia);

        if (distancia <= 0)
        {
            printf("A distancia nao pode ser igual ou menor que 0\n\n");
        }
    } while (distancia <= 0);

    do
    {
        printf("Informe quantos Km/litro seu veiculo faz em media: ");
        scanf("%f", &consumo);

        if (consumo <= 0)
        {
            printf("O media Km/L nao pode ser igual ou menor que 0\n\n");
        }
    } while (consumo <= 0);
    

    do
    {
        printf("E por ultimo informe qual o preco do litro de combustivel na data de hoje: ");
        scanf("%f", &precolitro);
    
        if (precolitro <= 0)
        {
            printf("O preco do litro de combustivel nao pode ser igual ou menor que 0\n\n");
        }
    } while (precolitro <= 0);
    

    valortotal = (distancia / consumo) * precolitro;

    printf("O valor gasto total com combustivel nesta viagem de %d km com o veiculo fazendo em media %.2f Km/L e a gasolina custando R$ %.2f sera de R$ %.2f",distancia, consumo, precolitro, valortotal);
}
