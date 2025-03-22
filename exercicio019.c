#include <stdio.h>

int main(){

    int matriz[3][3], matriz2[3][3], linha, coluna;

    for ( linha = 0; linha < 3; linha++)
    {
        for ( coluna = 0; coluna < 3; coluna++)
        {
            printf("Informe o numero que vai na linha %d e na coluna %d ", linha +1, coluna +1);
            scanf("%d", &matriz[linha][coluna]);
        }
        
    }

    printf("Matriz original!!!\n");
    for ( linha = 0; linha < 3; linha++)
    {
        for ( coluna = 0; coluna < 3; coluna++)
        {
            printf("%d\t", matriz[linha][coluna]);
        }
    }

    printf("\n\nMatriz multiplicada!!\n");
    for ( linha = 0; linha < 3; linha++)
    {
        for ( coluna = 0; coluna < 3; coluna++)
        {
            matriz2[linha][coluna] = matriz[linha][coluna] * 2;
            printf("%d\t", matriz2[linha][coluna]);
        }
    }
}    