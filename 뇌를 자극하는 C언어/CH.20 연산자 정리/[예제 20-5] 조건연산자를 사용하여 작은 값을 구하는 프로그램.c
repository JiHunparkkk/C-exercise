
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a, b;
	int min;

	printf("�� ������ �Է��ϼ��� : ");
	scanf("%d%d", &a, &b);

	min = (a > b) ? b : a; // ���� ������ ���
	printf("���� ���� : %d�Դϴ�.\n", min);
	return 0;
}