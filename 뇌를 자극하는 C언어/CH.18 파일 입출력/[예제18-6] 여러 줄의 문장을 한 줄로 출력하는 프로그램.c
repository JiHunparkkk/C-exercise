/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main()
{
	FILE *ifp, *ofp; // ���� �����ͺ��� ����
	char str[80]; // �Է� ���� ���ڿ��� ������ �迭
	char *res; // fgets �Լ��� ���ϰ��� ������ ����

	ifp = fopen("a.txt", "r"); // �Է� ������ �б� �������� ����
	if (ifp == NULL) {
		printf("�Է� ���� ���� ����.\n");
		return 1;
	}
	ofp = fopen("b.txt", "w"); // ��������� ���� �������� ����
	if (ofp == NULL) {
		printf("�Է� ���� ���� ����.\n");
		return 1;
	}

	while (1) { // �����͸� �Է��ϰ� ����ϴ� ������ �ݺ�
		res = fgets(str, sizeof(str), ifp); // �� �� �Է�
		if (res == NULL) break; // ������ ���̸� �ݺ��� ����
		str[strlen(str) - 1] = '\0'; // ���� ���� ����
		fputs(str, ofp); // �Է� ���� ���ڿ��� ���
		fputs(" ", ofp); // ���⸦ ���� ���� ���
	}

	fclose(ifp); // �Է� ���� �ݱ�
	fclose(ofp); // ��� ���� �ݱ�
	return 0;
}
*/