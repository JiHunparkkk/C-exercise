/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	double *high, *low; // 할당 받은 기억공간을 연결한 포인터 변수

	high = (double *)malloc(sizeof(double)); // 최고기온 동적 메모리 할당
	low = (double *)malloc(sizeof(double)); // 최저기온 동적 메모리 할당
	if (high == 0 || low==0) // 기억공간의 할당 여부를 검사
	{
		printf("메모리가 부족합니다.\n");
		return 0;
	}
	printf("최고기온과 최저기온을 입력하세요 :");
	scanf("%lf %lf", high, low);

	printf("일교차는 %.1lf도 입니다.\n", *high - *low);
	free(high); // 할당 받은 기억공간 반환, 여기서 반환하지 않아도 프로그램 종료와 함께 자동 반환됨.
	free(low);

	return 0;
}
*/