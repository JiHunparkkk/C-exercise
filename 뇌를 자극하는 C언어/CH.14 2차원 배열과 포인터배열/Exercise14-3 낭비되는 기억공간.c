/*
#include<stdio.h>
#include<string.h> // ���ڿ� ó���� ���� �������

int main()
{
	char animal[][10] = { "monkey","elephant","dog","sheep","pig","lion","tiger","puma","turtle","fox" }; // �迭�� ����� �ʱ�ȭ
	int i; // �ݺ� �����
	int count; // ���ڿ��� ������ ������ ����
	int total; // �迭�� ��ü ũ�⸦ ������ ����
	int stored = 0; // ���ڿ��� ����� ũ�⸦ ������ ����
	double waste; // ����Ǵ� ������ ũ���� ������ ����

	total = sizeof(animal); // �迭�� ��üũ�� ���
	count = total / sizeof(animal[0]); // ���ڿ��� �������ϱ�

	for (i = 0; i < count; i++) // ���ڿ��� ������ŭ �ݺ�
	{
		printf("%s\n", animal[i]); // ���ڿ� ���
		stored += strlen(animal[i])+1; // ���ڿ��� ���̸� ����Ͽ� ����, �ι��� ����
	}
	waste = total - stored; // �迭��üũ�⿡�� ���ڿ����� ���� ���

	printf("����Ǵ� �������� ���� : %.2lf%%\n", waste/total *100); // ����Ǵ� ������ ����Ͽ� ���

	return 0;
}
*/