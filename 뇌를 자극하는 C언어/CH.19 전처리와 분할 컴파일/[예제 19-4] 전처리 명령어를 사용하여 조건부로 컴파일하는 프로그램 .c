/*#include<stdio.h>*/
/* #define TC  매크로명을 정의하면 컴파일 에러! */
/*
#ifdef TC // TC 매크로명이 정의되어 있으면
#include <conio.h>
#define MAX_INT 32767
#else // 그렇지 않으면
#define MAX_INT 2147483647 // 이 문장을 컴파일 한다.
#endif // ifdef의 끝을 표시한다.

int main()
{
	int m = MAX_INT; // int형 변수에 MAX_ INT의 값 초기화
#ifdef TC // TC매크로명이 정의되어 있으면
	clrscr(); // 이 문장을 컴파일,  프로그램을 작성할 때 실행결과를 확인해 보기 위해서 주로 사용 "conio.h"헤더파일도 사용
#endif 
	printf("Maximum value => %d\n", m);
#ifdef TC // TC매크로명이 정의되어 있으면
	getch(); // 이 문장을 컴파일
#endif
	return 0;
}
*/