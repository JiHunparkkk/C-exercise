/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num;
	char name[20];

	printf("�й��� �Է��ϼ��� : ");
	scanf("%d", &num);
	fflush(stdin); // ���ۿ� �����͸� �����µ� �� �̸��� ��� �� �� ����??? --> fflush�� ����  = ��� ���۸� ���� �Լ�, ���� ǥ���Է��� stdin�� fflush�� 
	printf("�̸��� �Է��ϼ��� : ");                                                            //�ִ� ���� �Լ� �����ǵ��� �����. POSIX���� ǥ���� ����� Visual studio 2013���Ϲ��������� �����ϰ� �Ͽ����� 2015�̻� �������ʹ� C�� ǥ���� ���󰡱����� fflush(stdin)�� �ƹ��� ������ ���� �ʵ��� �������Ҵٰ� �Ѵ�...
	fgets(name, sizeof(name), stdin); // scanf�Լ��� �й��� �Է��� �� ���ۿ� ���ܳ��� ���� ���ڸ� fgets�Լ��� �����ͷ� �״�� �޾Ƶ��̱� ������ �̸��� �Է� ���� ����

	printf("�й� : %d\n", num);
	printf("�̸� : %s\n", name);
	return 0;
}
*/