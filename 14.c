#include <stdio.h>

void loop_serie(int k,double n0, double mount)
{
	if(n0 == (2 * k) + 1)
	{
		printf("%.2lf\n", mount);
		return;
	}
	else
	{
		mount += 1.0 / n0;
		loop_serie(k,n0 + 1, mount);
	}
}
int main()
{
	int num;
	scanf("%d", &num);
	loop_serie(num,2.0,1.0);
	//Tarsila += 8 * 90º
	return 0;
}