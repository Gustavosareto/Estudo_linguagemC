#include <stdio.h>

int main(){

    int n, contador = 1;
    

    printf("Informe quantos anos: ");
    scanf("%d", &n);

    int matriz[n][12][30];

    for (int ano = 0; ano < n; ano++)
    {
        for (int mes = 0; mes < 12; mes++)
        {
            for (int dia = 0; dia < 30; dia++)
            {
                matriz[ano][mes][dia] = contador++;
            }
            
        }
        
    }

    for (int ano = 0; ano < n; ano++)
    {
        printf("\nAno %d ", ano + 1);
        for (int mes = 0; mes < 12; mes++)
        {
            printf("\nMes %d ", mes + 1);
            for (int dia = 0; dia < 30; dia++)
            {
                printf("\nDia %3d ", matriz[ano][mes][dia]);
                if ((dia + 1) % 10 == 0) printf("\n");
            }
            
        }
        printf("\n");   
    }
    
    
}