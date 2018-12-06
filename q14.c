#include <stdio.h>

int main()
{
    int nas;
    int fin;
    printf("Digite o seu ano de nascimento:\n");
    scanf("%d", &nas);
    printf("Digite o ano atual:\n");
    scanf("%d", &fin);
    int id1 = fin - nas;
    int id2 = id1 * 12;
    int id3 = id2 * 30;
    int id4 = id1 * 52;
    printf("Sua idade em anos: %d anos\n", id1);
    printf("Sua idade em meses: %d meses\n", id2);
    printf("Sua idade em dias: %d dias\n", id3);
    printf("Sua idade em semanas: %d semanas\n", id4);
    return 0;
}
