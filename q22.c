#include <stdio.h>

int main()
{
    int n;
    printf("Insira o número de lados do polígono:\n");
    scanf("%d", &n);
    int d = (n * (n -3)) / 2;
    printf("A quantidade de diagonais é: %d\n", d);
    return 0;
}
