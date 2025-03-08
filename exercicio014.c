/*
14. Faça um algoritmo para ler o salário de um funcionário e aumentá-Io em 15%. Após
o aumento, desconte 8% de impostos. Imprima o salário inicial, o salário com o
aumento e o salário final.
*/

#include <stdio.h>

int main(){

    float salarioinicia, salarioaumento, salariofinal;
    float aumento = 0.15, imposto = 0.08;
    
    printf("Informe seu salario base: ");
    scanf("%f", &salarioinicia);

    salarioaumento = salarioinicia + (salarioinicia * aumento);
    salariofinal = salarioaumento - (salarioaumento * imposto);

    printf("Salario inicial R$ %.2f, Salario com aumento de 15 porcento R$ %2.f, Salario final com desconto de 8 porcento de imposto R$ %.2f", salarioinicia, salarioaumento, salariofinal);
}