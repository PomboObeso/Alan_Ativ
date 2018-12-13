#include <stdio.h>
#include <string.h>

void imc_calc()
{
    double alt,imc;
    char sex[20];
    printf("CALCULADOR DE PESO IDEAL\n");
    printf("Insira seu sexo:\n");
    scanf("%s", sex);
    printf("Insira sua altura:\n");
    scanf("%lf", &alt);
    if(sex[0] == 'm' || sex[0] == 'M')
    {
        imc = (72.7 * alt) - 58.0;
        printf("Seu peso ideal é de; %.2lf\n", imc);
    }
    else
    {
        imc = (61.1 * alt) - 44.7;
        printf("Seu peso ideal é de; %.2lf\n", imc);
    }
}
int main()
{
    imc_calc();
    return 0;
}
