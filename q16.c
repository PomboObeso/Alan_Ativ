#include <stdio.h>

int main ()
{
	double a,b,c;
	printf("Digite o valor do primeiro cateto\n");
	scanf ("%lf",&a);
	printf("Digite o valor do segundo cateto\n");
	scanf ("%lf",&b);
	c = (a*a) + (b*b);
	printf("A Hipotenusa é: %.2lf\n",c);	
	return 0;
}