#include <stdio.h>

int main(){
    
    int matriz[2][2], matriz2[2][2], matrizSoma[2][2] = {0};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Informe os valores: ");
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
        
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Informe os valores: ");
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
        
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            matrizSoma[i][j] = matriz[i][j] + matriz2[i][j];
        }
        
    }
    
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Resultado %d ", matrizSoma[i][j]);
        }
        
        printf("\n");
    }
    
    
    
}