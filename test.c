#include <stdio.h>

void primoneitor(int primo, int cont, int div)
{
    if(cont == primo)
    {
        if(div == 2)
        {
            decomp(num,primo,cont);
        }
        else
        {
            primoneitor(primo + 1, cont, div);
        }
    }
    else
    {
        if(primo % cont == 0)
        {
            div += 1;
        }
         
        primoneitor(primo, cont+1,div);
    }
}
void decomp(int num,int primo, int cont)
{

    if(num % primo == 0)
    {
        decomp(num,primo,cont +1);
    }
    else
    {
        primoneitor(primo + 1,1,0);
    }
}
int main()
{
    int num;
    scanf("%d", &num);
    decomp(num,2,)
    return 0;
}