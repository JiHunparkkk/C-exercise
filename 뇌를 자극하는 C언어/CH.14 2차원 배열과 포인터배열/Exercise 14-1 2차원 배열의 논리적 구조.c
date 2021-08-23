#include<stdio.h>

int main()
{
	int line[4][5]; // 2차원 배열의 선언, 행_row
	int row[4][5]; // 열_column

	int i, j; // 반복제어 변수
	int m = 0, k = 0; // 배열을 초기화하기 위한 누적변수

	for (i = 0; i < 4; i++) // i는 0~3까지 4번 반복, 4행
	{
		for (j = 0; j < 5; j++) // j는 0~4까지 5번 반복, 5열
		{
			m++; // 20번 반복되면서 1->20까지 증가
			line[i][j] = m; // 배열의 각 기억공간에 1~20까지 저장
		}
	}
	printf("행우선 순서로 저장된 배열\n");

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
	printf("열우선 순서로 저장된 배열\n");

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
