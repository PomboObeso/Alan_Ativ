#include <stdio.h>

int main ()
{
	double horas_t, valor_s, horas_extras,total,salario_bruto,salario_extra;
	printf("Informe o total de horas trabalhas\n");
	scanf ("%lf", &horas_t);
	printf("Informe o valor do salário minimo\n");
	scanf ("%lf", &valor_s);
	printf("Informe o total de horas extras trabalhadas\n");
	scanf ("%lf", &horas_extras);

	salario_bruto = horas_t * (valor_s/8);
	salario_extra = horas_extras * (valor_s/4);

	printf("%.2lf\n",salario_extra+salario_bruto);

	
	return 0;
}