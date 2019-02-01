#include <stdio.h>

int main()
{
	int i,j,aux,in,out,inverso_1,inverso_2;

	for(i = 10; i < 100; i++)
	{
		for(j = 10; j < 100; j++)
		{
			aux = i * j;
			in = i / 10;
			out = i % 10;
			inverso_1 = out * 10 + in;
			in = j / 10;
			out = j % 10;
			inverso_2 = out * 10 + in;
			if(aux == inverso_1 * inverso_2)
			{
				printf("%d x %d = %d x %d = %d\n",i,j,inverso_1,inverso_2,aux);
			}

		}
	}
	return 0;
}