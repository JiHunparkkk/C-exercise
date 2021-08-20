/*
#include<stdio.h>

struct student {	// 구조체의 형 선언 -> 프로그램 전체에서 구조체를 사용하기위해 메인함수 위에 선언
	int num; // int형 멤버
	double grade; // double형 멤버
}; // 세미콜론 주의

int main()
{
	struct student s1; // struct student형의 변수 선언

	s1.num = 2;
	s1.grade = 2.7;
	printf("학번 : %d\n", s1.num); // num멤버를 참조하여 출력
	printf("학점 : %.1lf\n", s1.grade); // grade멤버를 참조하여 출력
	return 0;
}
*/