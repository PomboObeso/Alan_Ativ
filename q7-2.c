#include <stdio.h>

void salario()
{
    double salario;
    printf("Insira o salario p/ analise de reajuste:\n");
    scanf("%lf", &salario);
    if(salario < 500)
    {
        printf("Salario reajustado: %.2lf\nValor do Reajuste: %.2lf\n", salario * 1.30,salario *0.3);
    }
    else
    {
        printf("O salario não pode ser reajustado");
    }
}
int main()
{
    salario();
}
