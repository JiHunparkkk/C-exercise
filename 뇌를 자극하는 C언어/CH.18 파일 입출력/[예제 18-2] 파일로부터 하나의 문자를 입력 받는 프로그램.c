/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	FILE *fp; // ���������� ���� ����
	char ch; // �Է� ���� ���ڸ� ������ ����

	fp = fopen("a.txt", "r"); // �б� �������� ���� ����
	if (fp == NULL) {
		printf("���� ���� ����.\n");
		return 1;
	}
	ch = fgetc(fp); // ������ ���Ϸκ��� ���� �Է�
	printf("�Է��� ���� : %c\n", ch);
	fclose(fp); // ������ ������ �ݴ´�.
	return 0;
}
*/