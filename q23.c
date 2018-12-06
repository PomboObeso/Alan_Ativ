#include <stdio.h>

int main ()
{
	double primeiro_angulo, segundo_angulo, terceiro_angulo;
	printf("Digite o valor do primeiro angulo\n");
	scanf ("%lf", &primeiro_angulo);
	printf("Digite o valor do segundo angulo\n");
	scanf ("%lf", &segundo_angulo);
	terceiro_angulo = 180 - (primeiro_angulo + segundo_angulo);
	printf("O terceiro angulo vale: %lf\n",terceiro_angulo);

	return 0;
}