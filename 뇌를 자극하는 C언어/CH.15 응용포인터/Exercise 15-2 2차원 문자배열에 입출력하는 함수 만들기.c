/*
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

void in_ary(char (*)[80]); // �迭�� ���ڿ��� �Է��ϴ� �Լ�
void out_ary(char (*)[80]); // �迭�� ���ڿ��� ����ϴ� �Լ�

int main()
{
	char ary[5][80]; // �迭 ����

	in_ary(ary); // �迭���� �ְ� �Է��Լ� ȣ��
	out_ary(ary); // �迭���� �ְ� ����Լ� ȣ��

	return 0;
}

void in_ary(char (*input)[80]) // �������ڰ� 2���� �迭�� �迭���̹Ƿ� �Ű������� �迭�����ͺ����� ����
{
	int i; // �ݺ������
	printf("�ټ� ���� ������ �Է��ϼ���.\n"); // �Է¾ȳ� �޼���
	for (i = 0; i < 5; i++) 
	{
		gets(input[i]); // input[i]�� �κй迭���� ������ �Ѵ�.
	}
}

void out_ary(char(*input)[80]) // ����Լ� ����
{
	int i;
	printf("�Էµ� ������...\n");
	for (i = 0; i < 5; i++)
	{
		puts(input[i]);
	}
}
*/