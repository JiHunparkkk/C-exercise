/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	FILE *fp; // ���� �����ͺ��� ����
	char ch; // �Է¹��� ���ڿ� ������ ����

	fp = fopen("a.txt", "r"); // �б� �������� ���� ����
	if (fp == NULL) { // ���ϰ��� ���� Ȯ��
		printf("���� ���� ����.\n");
		return 1;
	}
	while (1) { // ���ѹݺ�
		ch = fgetc(fp); // ������ ���Ϸκ��� �� ���ڸ� �Է��Ѵ�.
		if (ch == EOF) break; // ���ϰ��� -1�̸� �ݺ�����
		putchar(ch); // �о� ���� ���ڸ� ȭ�鿡 ���
	}
	fclose(fp);
	return 0;
}
*/