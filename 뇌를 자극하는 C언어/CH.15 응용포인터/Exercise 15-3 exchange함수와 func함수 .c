/*
#include<stdio.h>

void exchange(double *, double *); // ��ȯ �Լ�
void func(void(*)(double *, double *), double, double); // �Լ��� ����

int main()
{
	double a = 10, b = 20; // ������ ����� �ʱ�ȭ

	func(exchange, a, b); // �Լ������Ϳ� ��ȯ�� ���� �ְ� ȣ��
	return 0;
}
void func(void(*fp)(double *, double *), double a, double b) // ��ȯ�Լ��� ����Ű�� �Լ������ͺ����� ��ȯ�� ���� ������ �Ű�����
{
	printf("�ٲٱ� ���� a,b�� �� : %lf, %lf\n", a, b);
	fp(&a, &b); // �Լ������ͺ����� ��ȯ�Լ��� ȣ��
	printf("�ٲ� ���� a,b�� �� : %lf, %lf", a,b);
}
void exchange(double *ap, double *bp) // ��ȯ�Լ��� ����, �����͸� ȣ���Ͽ� func �Լ��� �Ű����� a,b�� ���� �ٲ۴�.
{
	double tp;

	tp = *ap;
	*ap = *bp;
	*bp = tp;
}
*/