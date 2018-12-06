#include <stdio.h>

int main()
{
    double din;
    printf("Digite o valor em reais:\n");
    scanf("%lf", &din);
    double dol = din * 1.80;
    double ale = din * 2.00;
    double lib = din * 1.57;
    printf("Dinheiro em Dólar: $ %.2lf\n", dol);
    printf("Dinheiro em Marco Alemão: DM %.2lf\n", ale);
    printf("Dinheiro em Libra Esterlina: £ %.2lf\n", lib);

    return 0;
}
