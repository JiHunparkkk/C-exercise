/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i; // 반복제어변수
	int n; // 정수값을 입력 받을 변수
	int size = sizeof(int) * 8; // int형의 비트 수를 계산

	printf("정수값을 입력하세요 : ");
	scanf("%d", &n);

	for (i = 1; i <= size; i++){ // int형의 비트 수만큼 반복
		if (n >> (size - i) & 1) putchar('1'); // 가장 왼쪽의 비트부터 확인하여 출력
		else putchar('0');
		if (i % 4 == 0) putchar(' '); // 4비트씩 끊어서 출력
	}
	return 0;
}
*/