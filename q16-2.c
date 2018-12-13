#include <stdio.h>

void desconto()
{
    double preco;
    printf("===Desconto para produtos===\n");
    printf("Insira o preço do produto:\n");
    scanf("%lf",&preco);
    if(preco <= 30)
    {
        printf("Preço atual: %.2lf\nDesconto: SEM DESCONTO\nNovo Preço: %.2lf\n",preco,preco);
    }
    else if(30 < preco && preco <= 100)
    {
        printf("Preço atual: %.2lf\nDesconto: %.2lf\nNovo Preço: %.2lf\n",preco,preco *0.10,preco*1.10);
    }
    else
    {
        printf("Preço atual: %.2lf\nDesconto: %.2lf\nNovo Preço: %.2lf\n",preco,preco *0.15,preco*1.15);
    }
}
int main()
{
    desconto();
    return 0;
}
