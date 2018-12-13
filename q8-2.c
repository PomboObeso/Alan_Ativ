#include <stdio.h>

void salario()
{
    double salario;
    printf("Insira o salario que sera analisado para reajuste:\n");
    scanf("%lf", &salario);
    if(salario <= 300)
    {
        printf("Salario reajustado:%.2lf\nValor do reajuste: %.2lf\n", salario * 1.35, salario * 0.35);
    }
    else
    {
        printf("Salario reajustado:%.2lf\nValor do reajuste: %.2lf\n", salario * 1.15, salario * 0.15);
    }
}
int main()
{
    salario();
    return 0;
}
