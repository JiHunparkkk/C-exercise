/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	double *high, *low; // �Ҵ� ���� �������� ������ ������ ����

	high = (double *)malloc(sizeof(double)); // �ְ��� ���� �޸� �Ҵ�
	low = (double *)malloc(sizeof(double)); // ������� ���� �޸� �Ҵ�
	if (high == 0 || low==0) // �������� �Ҵ� ���θ� �˻�
	{
		printf("�޸𸮰� �����մϴ�.\n");
		return 0;
	}
	printf("�ְ��°� ��������� �Է��ϼ��� :");
	scanf("%lf %lf", high, low);

	printf("�ϱ����� %.1lf�� �Դϴ�.\n", *high - *low);
	free(high); // �Ҵ� ���� ������ ��ȯ, ���⼭ ��ȯ���� �ʾƵ� ���α׷� ����� �Բ� �ڵ� ��ȯ��.
	free(low);

	return 0;
}
*/