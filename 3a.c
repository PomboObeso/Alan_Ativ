#include <stdio.h>

void pomboneitor(int num,double d, double n,double counter, int cont)
{

     if(cont == num)
     {
          //counter += n + 1/ d + 3;
          //printf(" %.0lf/%0.lf\n",n-1,d-3);
          printf("Somatório: %.2lf\n", counter);
          return;
     }
     else
     {
          counter += n/d;
          if (cont == num -1)
          {
               printf("%.0lf/%.0lf\n",n,d);
          }
          else
          {
               printf("%.0lf/%.0lf + ",n,d);
          }
          pomboneitor(num, d + 3, n + 1, counter, cont + 1);
     }
}
int main()
{
     int num;
     printf("Insira um número:\n");
     scanf("%d", &num);
     pomboneitor(num,2,1,0,0);
     return 0;
}
