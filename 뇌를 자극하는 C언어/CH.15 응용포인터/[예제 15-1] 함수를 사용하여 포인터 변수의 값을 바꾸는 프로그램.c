#include<stdio.h>

void exchange_ptr(char **, char**); // 함수의 선언

int main()
{
	char *ap = "success";
	char *bp = "failure";

	printf("ap -> %s, bp -> %s\n", ap, bp); // 바꾸기 전 문자열 출력
	exchange_ptr(&ap, &bp); // 함수 호출
	printf("ap -> %s, bp -> %s\n", ap, bp); // 바꾼 후 문자열 출력
	return 0;
}

void exchange_ptr(char **app, char**bpp) // 함수의 정의
{
	char *tp; // 임시 포인터 변수

	tp = *app;
	*app = *bpp;
	*bpp = tp;
}
