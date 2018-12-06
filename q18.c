#include <stdlib.h>
#include <stdio.h>

int main()
{
   double c;
   printf("dê a temperatura em Celsius:");
   scanf("%lf", &c);
   double f = (180 * (c + 32))/ 100;
   printf(" que em Farenheit é :%.2lf", f);
   //F = (180 x (C + 32))/100
   return 0;
}
