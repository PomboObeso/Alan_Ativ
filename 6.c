#include <stdio.h>

int quebrador(int num)
{
     int ini = num / 100;
     int fin = num % 100;
     return ini + fin;                  //tirar os primeiros numeros
}
void loop(int cont)
{
     if(cont > 9999)
     {
          return;
     }
     else
     {
          int soma = quebrador(cont);
          if(soma * soma == cont)
          {
               printf("%d\n", cont);
          }
          loop(cont + 1);
     }
}
int main()
{
     loop(1000);
     //int num = 1095;
     //int aux = num % 100 ;
     //printf("%d\n", aux);
     return 0;
}
