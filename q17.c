#include <stdio.h>

int main ()
{
	double raio;
	printf("Digite o valor do raio\n");
	scanf ("%lf",&raio);
	printf("O comprimento da esfera é: %lf\n", raio*2*3.14);
	printf("A area da esfera é: %lf\n", (raio*raio)*3.14);
	printf("O volume da esfera é: %lf\n", (raio*raio*raio)*((3.14*3)/4));

}