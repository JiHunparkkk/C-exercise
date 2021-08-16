/*
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void in_ary(char (*)[80]); // 배열에 문자열을 입력하는 함수
void out_ary(char (*)[80]); // 배열의 문자열을 출력하는 함수

int main()
{
	char ary[5][80]; // 배열 선언

	in_ary(ary); // 배열명을 주고 입력함수 호출
	out_ary(ary); // 배열명을 주고 출력함수 호출

	return 0;
}

void in_ary(char (*input)[80]) // 전달인자가 2차원 배열의 배열명이므로 매개변수는 배열포인터변수로 선언
{
	int i; // 반복제어변수
	printf("다섯 개의 문장을 입력하세요.\n"); // 입력안내 메세지
	for (i = 0; i < 5; i++) 
	{
		gets(input[i]); // input[i]는 부분배열명의 역할을 한다.
	}
}

void out_ary(char(*input)[80]) // 출력함수 정의
{
	int i;
	printf("입력된 문장은...\n");
	for (i = 0; i < 5; i++)
	{
		puts(input[i]);
	}
}
*/