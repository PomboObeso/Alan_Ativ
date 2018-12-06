#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
   double altura, catadj, hip, coss, soma;
   printf("digite a altura e, em seguida, a distância até a parede em metros");
   scanf("%lf %lf", &altura, &catadj);
   soma = (altura*altura) + (catadj*catadj);
   hip =  sqrt(soma);
   coss = altura/hip;
   printf("o comprimento da escada é de %.2lf e o cosseno do ângulo é de %.2lf/%.2lf ou %.2lf", hip, altura, hip, coss);

   return 0;
}
