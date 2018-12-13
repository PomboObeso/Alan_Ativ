#include <stdio.h>

int main()
{
    int x,y,z,aux;
    printf("Insira três numeros a seguir para ordenar:\n");
    scanf("%d %d %d", &x,&y,&z);
    if(x > y)
    {
        aux = x;
        x = y;
        y = aux;
    }
    if(x > z)
    {
        aux = x;
        x = z;
        z = aux;
    }
    if(y > z)
    {
        aux = y;
        y = z;
        z = aux;
    }
    printf("Numeros ordenados:\n");
    printf("%d\n%d\n%d\n",x,y,z);
    return 0;
}
