#include <stdio.h>

int main()
{
    int temp,i,qtd,num = 360,coef,resto;
    for(temp = 2; temp <= 100; temp++)
    {
        qtd = 0;
        for(i = 1; i <= temp; i++)
        {
            if(temp % i == 0)
            {
                qtd++;
            }
        }
        if(qtd == 2)
        {
            coef = 0;
            resto = 0;
            while(resto == 0 && num != 1)
            {
                resto = num % temp;
                if(resto == 0)
                {
                    coef++;
                    num = num / temp;
                }
            }
            printf("PRIMO: %d COEFICIENTE: %d\n", temp,coef);    
        }
        if(num == 1)
        {
            temp = 100;
        }
    }

    return 0;
}
