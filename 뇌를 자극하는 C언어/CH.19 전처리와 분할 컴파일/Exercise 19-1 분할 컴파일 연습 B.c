#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h> // printf���� ���ǹǷ� ������� ����

extern char grd; // �ٸ� ��⿡ ���ǵǾ��ִ� �ܺκ����� ����ϴ� ����

void input_score(int *k, int *e, int *m) // �Է� �Լ�
{
	printf("�� ������ ������ �Է��ϼ��� : ");
	scanf("%d%d%d", k, e, m); // �����ͺ����� ���� �������ڷ� �ش�.
}

int total(int k, int e, int m) // ������ ���ϴ� �Լ�
{
	return k + m + e; // ���� ������ ���������ʰ� �ٷ� ���� ����
}

double grade(int t)
{
	double average;
	average = t / 3.0;

	if (average >= 90.0) // ���ٷ� ������� �Է��ϸ� ���� ������ ���ϵ�
		grd = 'A';
	else if (average >= 80.0)
		grd = 'B';
	else if (average >= 70.0)
		grd = 'C';
	else grd = 'F';

	return average; // ����� ����
}