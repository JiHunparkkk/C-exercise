#include<stdio.h>
#include<string.h> // 문자열 처리함수를 위한 헤더파일

void exchange(char *, void *, void *); // 함수의 선언
int main()
{
	int a = 10, b = 20;
	double da = 1.5, db = 2.5;
	exchange("int", &a, &b); // 두 정수값 교환
	printf("정수값 교환 후 : %d, %d\n", a, b); // 교환 후 출력

	exchange("double", &da, &db); // 두 실수값 교환
	printf("실수값 교환 후 : %.1lf, %.1lf\n", da, db); // 교환 후 출력
	return 0;
}

void exchange(char *type, void *vp1, void *vp2) // 함수의 정의
{
	int itp; // 정수값 임시변수
	double dtp; // 실수값 임시변수

	if (strcmp(type, "int") == 0) // 교환할 자료형이 "int"형 이면
	{
		itp = *(int *)vp1; // vp1,vp2를 (int *)로 형변환
		*(int *)vp1 = *(int *)vp2;
		*(int *)vp2 = itp;
	}
	if (strcmp(type, "double") == 0)
	{
		dtp = *(double *)vp1;
		*(double *)vp1 = *(double *)vp2;
		*(double *)vp2 = dtp;
	}
}