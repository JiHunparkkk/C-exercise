/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	FILE *fp; // 파일 포인터변수 선언
	char ch; // 입력받은 문자열 저장할 변수

	fp = fopen("a.txt", "r"); // 읽기 전용으로 파일 개방
	if (fp == NULL) { // 파일개방 여부 확인
		printf("파일 개방 실패.\n");
		return 1;
	}
	while (1) { // 무한반복
		ch = fgetc(fp); // 개방한 파일로부터 한 문자를 입력한다.
		if (ch == EOF) break; // 리턴값이 -1이면 반복종료
		putchar(ch); // 읽어 들인 문자를 화면에 출력
	}
	fclose(fp);
	return 0;
}
*/