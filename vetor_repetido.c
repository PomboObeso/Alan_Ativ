#include <stdio.h>

int main()
{
	int n,i,k;
	scanf("%d", &n);
	int v[n];
	for(i = 0; i < n; i++)
	{
		scanf("%d", &v[i]);
	}
	printf("\n");
	for(i = 0; i < n; i++)
	{
		for(k = i+1; k < n; k++)
		{
			if(v[i] == v[k])
			{
				v[k] = -1;
			}
		}
	}
	for(i = 0; i < n; i++)
	{
		if(v[i] != -1)
		{
			printf("%d\n", v[i]);
		}
	}

	return 0;
}
