/*
#include<stdio.h>
#include<stdlib.h>  // malloc 함수를 사용하기 위한 헤더파일 

int main()
{
	int *ip;
	double *dp;

	ip = (int *)malloc(sizeof(int)); // 기억공간을 동적으로 할당받아서 각 포인터에 연결
	dp = (double *)malloc(sizeof(double)); // 직접 바이트 수를 전달인자로 주기 보다 각 자료형에 대한 크기를 계산하여 넣어주면 호환성있는 프로그램이 됨

	*ip = 10; // 포인터변수로 각각 할당 받은 기억공간을 참조하여 값을 저장
	*dp = 3.4;

	printf("정수형으로 사용 : %d\n", *ip);
	printf("실수형으로 사용 : %lf\n", *dp);
	return 0;

}
*/