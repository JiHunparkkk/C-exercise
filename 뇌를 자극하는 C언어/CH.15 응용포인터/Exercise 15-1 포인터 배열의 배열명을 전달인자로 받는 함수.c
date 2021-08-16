/*
#include<stdio.h>

void str_prn(char **, int ); // 함수의 선언

int main()
{
	char *ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" }; // 포인터배열 선언, 초기화
	int count; // 배열요소의 개수를 저장할 변수

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]); // 배열요소의 개수 계산
	str_prn(ptr_ary,count); // 함수의 호출, 배열명과 배열요소의 개수를 전달인자로 줌 -> 배열명=포인터 이므로 주소연산자x
	
	return 0;
}

void str_prn(char **spp,int count) // 함수의 정의, 배열명을 저장할 매개변수는 이중포인터변수로 선언
{
	int i; // 반복 제어변수
	for (i = 0; i < count; i++)
	{
		printf("%s\n", spp[i]); // spp를 마치 배열명처럼 사용
	}
}
*/