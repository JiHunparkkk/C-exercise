/*
#include<stdio.h>

int main()
{
	int line[4][5]; // 2���� �迭�� ����, ��_row
	int row[4][5]; // ��_column

	int i, j; // �ݺ����� ����
	int m = 0, k = 0; // �迭�� �ʱ�ȭ�ϱ� ���� ��������

	for (i = 0; i < 4; i++) // i�� 0~3���� 4�� �ݺ�, 4��
	{
		for (j = 0; j < 5; j++) // j�� 0~4���� 5�� �ݺ�, 5��
		{
			m++; // 20�� �ݺ��Ǹ鼭 1->20���� ����
			line[i][j] = m; // �迭�� �� �������� 1~20���� ����
		}
	}
	printf("��켱 ������ ����� �迭\n");

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5 ; j++)
		{
			printf("%5d", line[i][j]);
		}
		printf("\n");
	}

	for (j = 0; j < 5; j++)
	{
		for (i = 0; i < 4; i++)
		{
			k++;
			row[i][j] = k;
		}
	}
	printf("���켱 ������ ����� �迭\n");

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%5d", row[i][j]);
		}
		printf("\n");
	}

	return 0;

}
*/