#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> // printf문이 사용되므로 헤더파일 포함

extern char grd; // 다른 모듈에 정의되어있는 외부변수를 사용하는 선언

void input_score(int *k, int *e, int *m) // 입력 함수
{
	printf("세 과목의 점수를 입력하세요 : ");
	scanf("%d%d%d", k, e, m); // 포인터변수를 직접 전달인자로 준다.
}

int total(int k, int e, int m) // 총점을 구하는 함수
{
	return k + m + e; // 따로 변수를 선언하지않고 바로 총점 리턴
}

double grade(int t)
{
	double average;
	average = t / 3.0;

	if (average >= 90.0) // 한줄로 내용까지 입력하면 좀더 간결해 보일듯
		grd = 'A';
	else if (average >= 80.0)
		grd = 'B';
	else if (average >= 70.0)
		grd = 'C';
	else grd = 'F';

	return average; // 평균을 리턴
}