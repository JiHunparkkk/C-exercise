/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	FILE *fp; // ���������ͺ��� ����
	char ch; // �Է� ���� ���ڸ� ������ ����

	fp = fopen("b.txt", "w"); // ���� �������� ���� ����
	if (fp == NULL) {
		printf("���� ���� ����.\n");
		return 1;
	}
	printf("�����͸� �Է��ϼ���.\n");
	while (1) {
		ch = getchar(); // Ű����κ��� �� ���ڸ� �Է��Ѵ�.
		if (ch == EOF) break; // Ctrl + zŰ �Է��ϸ� �ݺ� ����
		fputc(ch, fp); // �о� ���� ���ڸ� ���Ͽ� ���
	}
	fclose(fp); // ������ �ݴ´�.
	return 0;
}
*/