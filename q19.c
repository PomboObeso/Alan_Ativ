#include <stdio.h>

int main()
{
    double lad;
    double comp;
    printf("Insira a primeira dimensão do cômodo:\n");
    scanf("%lf", &lad);
    printf("Insira a segunda dimensão do cômodo:\n");
    scanf("%lf", &comp);
    double com = lad * comp;
    double ilu = comp * 18;
    printf("Área do cômodo: %.2lf m²\n", com);
    printf("Potência necessária: %.0lf W\n", ilu);
    return 0;
}
