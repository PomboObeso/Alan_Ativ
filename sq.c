#include <stdio.h>
#include <math.h>

int main()
{
     int num,i,total = 0;
     printf("Digite um número entre 0 e 9\n");
     scanf("%d", &num);
     if(num == 0)
     {
          printf("0\n");
     }
     else
     {
          for(i = 1; i <= num; i++)
          {
               total += pow(i,2);
          }
          printf("%d\n", total);
     }

     return 0;
}
