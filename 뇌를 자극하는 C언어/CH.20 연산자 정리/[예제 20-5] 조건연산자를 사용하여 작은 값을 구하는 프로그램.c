
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b;
	int min;

	printf("두 정수를 입력하세요 : ");
	scanf("%d%d", &a, &b);

	min = (a > b) ? b : a; // 조건 연산자 사용
	printf("작은 수는 : %d입니다.\n", min);
	return 0;
}