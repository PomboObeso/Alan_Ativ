#include <stdio.h>

int main ()
{
	double horas,minutos;
	printf("Digite o total de horas\n");
	scanf ("%lf",&horas);
	printf("Digite o total de minutos\n");
	scanf ("%lf",&minutos);

	printf("Horas convertida em minutos: %.3lf \n", horas * 60);
	printf("Total de minutos: %.3lf\n", (horas * 60)+minutos);
	printf("Total de minutos em segundos: %.3lf\n", ((horas * 60)+minutos)*60);

	
	return 0;
}