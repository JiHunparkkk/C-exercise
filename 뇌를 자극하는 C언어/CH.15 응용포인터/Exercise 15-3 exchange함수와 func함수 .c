#include<stdio.h>

void exchange(double *, double *); // 교환 함수
void func(void(*)(double *, double *), double, double); // 함수의 선언

int main()
{
	double a = 10, b = 20; // 변수의 선언과 초기화

	func(exchange, a, b); // 함수포인터와 교환할 값을 주고 호출
	return 0;
}
void func(void(*fp)(double *, double *), double a, double b) // 교환함수를 가리키는 함수포인터변수와 교환할 값을 저장할 매개변수
{
	printf("바꾸기 전의 a,b의 값 : %lf, %lf\n", a, b);
	fp(&a, &b); // 함수포인터변수로 교환함수를 호출
	printf("바꾼 후의 a,b의 값 : %lf, %lf", a,b);
}
void exchange(double *ap, double *bp) // 교환함수의 정의, 포인터를 호출하여 func 함수의 매개변수 a,b의 값을 바꾼다.
{
	double tp;

	tp = *ap;
	*ap = *bp;
	*bp = tp;
}
