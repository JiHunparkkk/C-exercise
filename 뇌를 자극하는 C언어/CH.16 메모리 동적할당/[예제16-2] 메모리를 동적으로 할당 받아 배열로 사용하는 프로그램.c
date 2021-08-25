#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *ip;
	int i, sum = 0;

	ip = (int*)malloc(5 * sizeof(int));
	if (ip == 0)
	{
		printf("메모리가 부족합니다.\n");
		return 1;
	}
	printf("다섯 명의 나이를 입력하세요 : ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", ip + i); // 데이터를 저장할 위치를 전달한다.
		sum += ip[i]; // 저장된 값을 참조하여 누적
	}
	printf("다섯 명의 평균나이 : %.1lf\n", sum / 5.0);
	free(ip);

	return 0;
}
