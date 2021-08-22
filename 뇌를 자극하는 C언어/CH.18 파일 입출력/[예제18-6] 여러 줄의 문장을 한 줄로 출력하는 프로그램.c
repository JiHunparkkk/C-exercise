/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	FILE *ifp, *ofp; // 파일 포인터변수 선언
	char str[80]; // 입력 받은 문자열을 저장할 배열
	char *res; // fgets 함수의 리턴값을 저장할 변수

	ifp = fopen("a.txt", "r"); // 입력 파일을 읽기 전용으로 개방
	if (ifp == NULL) {
		printf("입력 파일 개방 실패.\n");
		return 1;
	}
	ofp = fopen("b.txt", "w"); // 출력파일을 쓰기 전용으로 개방
	if (ofp == NULL) {
		printf("입력 파일 개방 실패.\n");
		return 1;
	}

	while (1) { // 데이터를 입력하고 출력하는 과정을 반복
		res = fgets(str, sizeof(str), ifp); // 한 줄 입력
		if (res == NULL) break; // 파일의 끝이면 반복을 종료
		str[strlen(str) - 1] = '\0'; // 새줄 문자 제거
		fputs(str, ofp); // 입력 받은 문자열을 출력
		fputs(" ", ofp); // 띄어쓰기를 위한 공백 출력
	}

	fclose(ifp); // 입력 파일 닫기
	fclose(ofp); // 출력 파일 닫기
	return 0;
}
*/