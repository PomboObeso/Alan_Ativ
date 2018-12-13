#include <stdio.h>

void credito()
{
    double saldo;
    printf("Insira o saldo medio para analise de credito:\n");
    scanf("%lf",&saldo);
    if(saldo <= 200)
    {
        printf("Saldo medio do cliente: %.2lf\nValor de credito disponibilizado: %.2lf\n",saldo, saldo *0.25);
    }
    else if(200 < saldo && saldo <= 300)
    {
        printf("Saldo medio do cliente: %.2lf\nValor de credito disponibilizado: %.2lf\n",saldo, saldo *0.20);
    }
    else if(300 < saldo && saldo <= 400)
    {
        printf("Saldo medio do cliente: %.2lf\nValor de credito disponibilizado: %.2lf\n",saldo, saldo *0.25);
    }
    else
    {
        printf("Saldo medio do cliente: %.2lf\nValor de credito disponibilizado: %.2lf\n",saldo, saldo *0.30);
    }
}
int main()
{
    credito();
    return 0;
}
