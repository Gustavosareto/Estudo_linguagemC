/*
7. Leia dois valores para as variáveis A e B, e efetue a troca dos valores de forma que a
variável A passe a ter o valor da variável B e que a variável B passe a ter o valor da
variável A. Ao final, exiba os resultados. Obs.: deverão ser feitos dois algoritmos: no
primeiro poderá ser usada uma terceira variável. No segundo somente as variáveis A e
B.
*/

#include <stdio.h>

int main(){

    int a = 0, b = 0, fix = 0;

    printf("Informe um valor: ");
    scanf("%d", &a);

    printf("Informe um valor: ");
    scanf("%d", &b);

    fix = a;
    a = b;
    b = fix;

    printf("valor de A %d, valor de B %d", a, b);
}