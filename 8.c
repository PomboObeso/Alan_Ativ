#include <stdio.h>

void contador(int num, int cont)
{
	if(num == 0)
	{
		printf("%d\n", cont);
		return;
	}
	else
	{
		contador(num/10, cont + 1);
	}
}
int main()
{
	int num;
	scanf("%d", &num);

	contador(num,0);
	return 0;
}