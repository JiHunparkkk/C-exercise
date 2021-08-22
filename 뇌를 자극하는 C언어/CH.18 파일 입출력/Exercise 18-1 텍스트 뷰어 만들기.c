/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	FILE *fp; // 파일포인터 변수
	char ch; // 파일에서 읽은문자를 저장할 변수
	int cnt=0; // 출력된 줄 수를 세는 변수

	fp = fopen("a.txt", "r+"); // 읽기 전용으로 파일 개방
	if (fp == NULL) { // 개방여부확인
		printf("파일이 개방되지 않았습니다.\n");
		return 1;
	}

	while (1) {
		ch = fgetc(fp); // 개방된 파일로부터 하나의 문자 입력
		if (ch == EOF) break; // 파일의 끝이면 반복종료
		putchar(ch); // 화면에 입력한 문자를 출력
		if (ch == '.') {
			putchar('\n');
			cnt++;
			if (cnt % 3 == 0) putchar('\n'); // 세 줄이 출력되면 한 줄을 비운다.
		}
	}
	fclose(fp);
	return 0;
}
*/
