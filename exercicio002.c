/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	int vetor[4];

	vetor[0] = 10;
	vetor[1] = 46;
	vetor[2] = 41;
	vetor[3] = 60;

	vetor[4] = 200;

	printf("valores do vetor: \n");
	for (int i = 0; i < 4; i++) {
		printf("vetor[%d] = %d\n", i, vetor[i]);
	}


	return 0;
}