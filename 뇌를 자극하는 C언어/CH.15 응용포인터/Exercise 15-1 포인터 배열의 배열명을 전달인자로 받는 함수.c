/*
#include<stdio.h>

void str_prn(char **, int ); // �Լ��� ����

int main()
{
	char *ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" }; // �����͹迭 ����, �ʱ�ȭ
	int count; // �迭����� ������ ������ ����

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]); // �迭����� ���� ���
	str_prn(ptr_ary,count); // �Լ��� ȣ��, �迭��� �迭����� ������ �������ڷ� �� -> �迭��=������ �̹Ƿ� �ּҿ�����x
	
	return 0;
}

void str_prn(char **spp,int count) // �Լ��� ����, �迭���� ������ �Ű������� ���������ͺ����� ����
{
	int i; // �ݺ� �����
	for (i = 0; i < count; i++)
	{
		printf("%s\n", spp[i]); // spp�� ��ġ �迭��ó�� ���
	}
}
*/