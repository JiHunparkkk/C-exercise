/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i; // �ݺ������
	int n; // �������� �Է� ���� ����
	int size = sizeof(int) * 8; // int���� ��Ʈ ���� ���

	printf("�������� �Է��ϼ��� : ");
	scanf("%d", &n);

	for (i = 1; i <= size; i++){ // int���� ��Ʈ ����ŭ �ݺ�
		if (n >> (size - i) & 1) putchar('1'); // ���� ������ ��Ʈ���� Ȯ���Ͽ� ���
		else putchar('0');
		if (i % 4 == 0) putchar(' '); // 4��Ʈ�� ��� ���
	}
	return 0;
}
*/