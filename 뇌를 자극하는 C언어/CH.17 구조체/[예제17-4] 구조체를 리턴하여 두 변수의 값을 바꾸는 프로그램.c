/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

struct vision { // 로봇의 시력을 저장할 구조체
	double left; // 왼쪽 눈 시력 저장할 멤버
	double right; // 오른쪽 눈 시력 저장할 멤버
};
struct vision exchange(struct vision); // 두 시력을 바꾸는 함수

int main()
{
	struct vision robot; // 구조체 변수 선언

	printf("로보트의 시력을 입력하세요(좌,우) : ");
	scanf("%lf%lf", &robot.left, &robot.right);
	robot = exchange(robot); // 교환함수 호출
	printf("바뀐 로보트의 시력(좌,우) : %.1lf, %.1lf\n",robot.left, robot.right);
	return 0;
}

struct vision exchange(struct vision robot) // 구조체를 리턴하는 함수
{
	double temp;
	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;
	return robot; // 구조체 변수를 리턴한다.
}
*/