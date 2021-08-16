#include<stdio.h>

int main()
{
	int ex[5][6] = { 0 };
	int i, j;
	int m = 0, column;
	

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			m++;
			ex[i][j] = m;
			ex[i][6] += ex[i][j];
		}
		
	}

	for (j = 0; j < 6; j++)
	{
		for (i = 0; i < 4; i++)
		{
			ex[5][j] += ex[i][j];
		}
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 6; j++)
		{
			printf("%5d", ex[i][j]);
		}
		printf("\n");
	}

	return 0;

}