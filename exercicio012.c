/*
12. Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma
sendo vendida respectivamente por 10, 12 e 15 reais. Construa um algoritmo em que o
usuário forneça a quantidade de camisetas pequenas, médias e grandes referentes a
uma venda, e a máquina informe quanto será o valor arrecadado.
*/


#include <stdio.h>

int main(){

    int pequena, media, grande;
    float valortotal = 0;
    char confirmacao;

    do
    {
        printf("Quantas camisetas pequenas gostaria de levar? (R$ 10,00 a unidade): ");
        scanf("%d", &pequena);

        if (pequena < 0)
        {
            printf("Erro, nao pode levar quantidade menor que 0 unidade");
        }

    } while (pequena < 0);
    
    do
    {
        printf("Quantas camisetas media gostaria de levar? (R$ 12,00 a unidade): ");
        scanf("%d", &media);

        if (media < 0)
            {
                printf("Erro, nao pode levar quantidade menor que 0 unidade");
            }
    } while (media < 0);
    

    do
    {
        printf("Quantas camisetas grande gostaria de levar? (R$ 15,00 a unidade): ");
        scanf("%d", &grande);

        if (grande < 0)
            {
                printf("Erro, nao pode levar quantidade menor que 0 unidade");
            }
    } while (grande < 0);
    

    valortotal = (pequena * 10) + (media * 12) + (grande * 15);

    printf("\nO valor total das camisetas saira no valor de R$ %.2f\n\n", valortotal);
    printf("Deseja finalizar a compra? (s/n)");
    scanf(" %c", &confirmacao);

    if (confirmacao =='s')
    {
        printf("Compra efetuada com sucesso");
    }else
    {
        printf("Compra cancelada com sucesso");
    }
    
    
}