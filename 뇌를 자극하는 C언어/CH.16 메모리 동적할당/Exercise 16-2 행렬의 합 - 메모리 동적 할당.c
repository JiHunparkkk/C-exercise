/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ap[3], *bp[3], *cp[3]; // 행렬의 각 행을 연결할 포인터배열
	int i, j;

	for (i = 0; i < 3; i++) // 3개의 2차원 배열을 동적으로 만든다.
	{
		ap[i] = (int*)malloc(4 * sizeof(int));
		bp[i] = (int*)malloc(4 * sizeof(int));
		cp[i] = (int*)malloc(4 * sizeof(int));
	}

	for (i = 0; i < 3; i++) // 2개의 행렬에 값을 초기화하며, 각 요소의 합을 3번째 행렬에 저장
	{
		for (j = 0; j < 4; j++)
		{
			ap[i][j] = i * 4 + j + 1;
			bp[i][j] = 12 - (i*4 + j);
			cp[i][j] = ap[i][j] + bp[i][j];
		}
	}
	
	for (i = 0; i < 3; i++) // 3번째 행렬의 값 출력
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", cp[i][j]);
		}
		printf("\n"); // 한 행 출력 후 줄 바꿈
	}

	return 0;
}
*/