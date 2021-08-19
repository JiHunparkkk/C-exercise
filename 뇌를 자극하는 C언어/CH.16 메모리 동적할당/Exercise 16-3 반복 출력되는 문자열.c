/*
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
	int i;
	int count; // 반복할 횟수를 저장할 변수

	if (argc < 3) { // 전달인자의 개수를 검사하여 잘못된 경우는 메시지를 출력하고 종료
		printf("프로그램 사용법 오류\n");
		printf("사용법 : string_print 문자열 반복횟수 \n");
		return 0;
	}

	count = atoi(argv[2]); // 문자열로 된 반복횟수를 정수값으로 변환
	for (i = 0; i < count; i++)
	{
		printf("%s\n", argv[1]); // 명령행 전달인자로 넘어온 문자열을 출력
	}
	return 0;
}
*/