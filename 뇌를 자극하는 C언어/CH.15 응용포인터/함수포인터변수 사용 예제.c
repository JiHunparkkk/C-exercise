/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void func(int(*)(int, int)); // func �Լ��� ����, �Ű������� �Լ������ͺ���
int sum(int, int); // �� �������� ���ϴ� �Լ��� ����
int mul(int, int); // �� �������� ���ϴ� �Լ��� ����
int max(int, int); // �� ������ �߿��� ū ���� ���ϴ� �Լ��� ����
int main()
{
	int sel; // �޴� ���� ��ȣ�� ������ ����

	printf("1. �� ������ ��\n"); //�޴� ���
	printf("2. �� ������ ��\n");
	printf("3. �� ���� �߿��� ū �� ���\n");
	printf("���ϴ� �۾��� �����ϼ��� : ");
	scanf("%d", &sel); // �޴� ��ȣ �Է�

	switch (sel) // ������ ��ȣ��
	{
	case 1: func(sum); break; // 1�̸� func�� ���� ��� �߰�
	case 2: func(mul); break; // 2�̸� func�� ���� ��� �߰�
	case 3: func(max); break; // 3�̸� func�� ū �� ���ϴ� ��� �߰�
	}
	return 0;
}

void func(int(*fp)(int, int)) // �Լ��� ����
{
	int a, b; // �� �������� ������ ����
	int res; // �Լ��� ���ϰ��� ������ ����

	printf("�� �������� �Է��ϼ��� : "); // �Է� �ȳ� �޼���
	scanf("%d%d", &a, &b);
	res = fp(a, b); // �Լ������ͺ����� ����Ű�� �Լ��� ȣ���Ѵ�.
	printf("������� : %d\n", res); // ���ϰ� ���
}

int sum(int a, int b) // ���� �Լ��� ����
{
	return a + b;
}

int mul(int a, int b) // ���� �Լ��� ����
{
	return a * b;
}

int max(int a, int b) // ū �� ���ϴ� �Լ��� ����
{
	if (a > b) return a;
	else return b;
}
*/