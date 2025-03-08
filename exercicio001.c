/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>

#define TAM 10

int main()
{

    setlocale(LC_ALL,"Portuguese");
    
    int numero[TAM], i;
    
    for(i = 0; i < TAM; i++){
        printf("posicao %d do vetor ", i);
        scanf("%d", &numero[i]);
    }
    
    printf("\n\n");
    
    for(i = 0; i < TAM; i++){
        printf("%d\t", numero[i]);
    }


	return 0;
}