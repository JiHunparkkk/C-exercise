/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	FILE *fp; // ���������� ����
	char ch; // ���Ͽ��� �������ڸ� ������ ����
	int cnt=0; // ��µ� �� ���� ���� ����

	fp = fopen("a.txt", "r+"); // �б� �������� ���� ����
	if (fp == NULL) { // ���濩��Ȯ��
		printf("������ ������� �ʾҽ��ϴ�.\n");
		return 1;
	}

	while (1) {
		ch = fgetc(fp); // ����� ���Ϸκ��� �ϳ��� ���� �Է�
		if (ch == EOF) break; // ������ ���̸� �ݺ�����
		putchar(ch); // ȭ�鿡 �Է��� ���ڸ� ���
		if (ch == '.') {
			putchar('\n');
			cnt++;
			if (cnt % 3 == 0) putchar('\n'); // �� ���� ��µǸ� �� ���� ����.
		}
	}
	fclose(fp);
	return 0;
}
*/
