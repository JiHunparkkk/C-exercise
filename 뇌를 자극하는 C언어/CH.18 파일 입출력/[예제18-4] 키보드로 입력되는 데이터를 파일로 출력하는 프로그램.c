/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	FILE *fp; // 파일포인터변수 선언
	char ch; // 입력 받은 문자를 저장할 변수

	fp = fopen("b.txt", "w"); // 쓰기 전용으로 파일 개방
	if (fp == NULL) {
		printf("파일 개방 실패.\n");
		return 1;
	}
	printf("데이터를 입력하세요.\n");
	while (1) {
		ch = getchar(); // 키보드로부터 한 문자를 입력한다.
		if (ch == EOF) break; // Ctrl + z키 입력하면 반복 종료
		fputc(ch, fp); // 읽어 들인 문자를 파일에 출력
	}
	fclose(fp); // 파일을 닫는다.
	return 0;
}
*/