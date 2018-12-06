#include <stdlib.h>
#include <stdio.h>

int main()
{
   int qnt_de_multa, i;
   printf("digite a quantidade de multas a pagar:");
   scanf("%d", &qnt_de_multa);
   double valormultas[qnt_de_multa + 1], total = 0, resto, salario;
   for(i = 1; i < qnt_de_multa + 1; i ++)
   {
      printf("digite o valor da multa de número %d:", i);
      scanf("%lf", &valormultas[i]);
      total += valormultas[i] + (valormultas[i]*0.02);
   }
   printf("digite seu salário:" );
   scanf("%lf", &salario);
   resto = salario - total;
   if(resto >= 0)
   {
      printf("restará %.2lf", resto);
   }
   else
   {
      salario = salario*(-1);
      printf("você deverá %.2lf", resto);
   }

   return 0;
}
