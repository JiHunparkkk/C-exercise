#include<stdio.h>
#include<string.h> // ���ڿ� ó���Լ��� ���� �������

void exchange(char *, void *, void *); // �Լ��� ����
int main()
{
	int a = 10, b = 20;
	double da = 1.5, db = 2.5;
	exchange("int", &a, &b); // �� ������ ��ȯ
	printf("������ ��ȯ �� : %d, %d\n", a, b); // ��ȯ �� ���

	exchange("double", &da, &db); // �� �Ǽ��� ��ȯ
	printf("�Ǽ��� ��ȯ �� : %.1lf, %.1lf\n", da, db); // ��ȯ �� ���
	return 0;
}

void exchange(char *type, void *vp1, void *vp2) // �Լ��� ����
{
	int itp; // ������ �ӽú���
	double dtp; // �Ǽ��� �ӽú���

	if (strcmp(type, "int") == 0) // ��ȯ�� �ڷ����� "int"�� �̸�
	{
		itp = *(int *)vp1; // vp1,vp2�� (int *)�� ����ȯ
		*(int *)vp1 = *(int *)vp2;
		*(int *)vp2 = itp;
	}
	if (strcmp(type, "double") == 0)
	{
		dtp = *(double *)vp1;
		*(double *)vp1 = *(double *)vp2;
		*(double *)vp2 = dtp;
	}
}