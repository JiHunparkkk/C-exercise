/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

struct profile {
	char name[20];
	double grade;
	int english;
};

void input_data(struct profile *); // ����ü ������ �����͸� �Է��ϴ� �Լ� ����
void elite(struct profile *); // ����Ʈ ����� ����ϴ� �Լ�

int main()
{
	struct profile new_staff[5];

	input_data(new_staff);
	elite(new_staff);
	return 0;
}

void input_data(struct profile *ns)
{
	int i;

	printf("�̸�, ����, ���������� �Է��ϼ���.\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%s%lf%d", (ns+i)->name, &(ns+i)->grade, &(ns+i)->english);
	}
}

void elite(struct profile *nss)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		if (nss[i].grade >= 4.0 && nss[i].english >= 900)
			printf("%s, %.1lf, %d\n", nss[i].name, nss[i].grade, nss[i].english);
	}
}
*/