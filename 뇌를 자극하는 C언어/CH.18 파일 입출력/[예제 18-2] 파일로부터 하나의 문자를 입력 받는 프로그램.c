/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	FILE *fp; // 파일포인터 변수 선언
	char ch; // 입력 받은 문자를 저장할 변수

	fp = fopen("a.txt", "r"); // 읽기 전용으로 파일 개방
	if (fp == NULL) {
		printf("파일 개방 실패.\n");
		return 1;
	}
	ch = fgetc(fp); // 개방한 파일로부터 문자 입력
	printf("입력한 문자 : %c\n", ch);
	fclose(fp); // 개방한 파일을 닫는다.
	return 0;
}
*/