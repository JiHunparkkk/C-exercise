/*
#include<stdio.h>

void exchange_ptr(char **, char**); // �Լ��� ����

int main()
{
	char *ap = "success";
	char *bp = "failure";

	printf("ap -> %s, bp -> %s\n", ap, bp); // �ٲٱ� �� ���ڿ� ���
	exchange_ptr(&ap, &bp); // �Լ� ȣ��
	printf("ap -> %s, bp -> %s\n", ap, bp); // �ٲ� �� ���ڿ� ���
	return 0;
}

void exchange_ptr(char **app, char**bpp) // �Լ��� ����
{
	char *tp; // �ӽ� ������ ����

	tp = *app;
	*app = *bpp;
	*bpp = tp;
}
*/