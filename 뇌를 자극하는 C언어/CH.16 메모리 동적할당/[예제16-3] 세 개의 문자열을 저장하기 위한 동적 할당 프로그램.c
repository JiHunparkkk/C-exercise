#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char temp[80]; // 임시 문자배열, 충분히 크게 확보
	char *str[3]; // 동적 할당된 기억공간을 연결할 포인터배열
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("문자열을 입력하세요 : ");
		gets(temp);
		str[i] = (char *)malloc(strlen(temp) + 1); // 기억공간 할당과 연결
		strcpy(str[i], temp);
	}
	for (i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]);
	}
	for (i = 0; i < 3; i++)
	{
		free(str[i]); // 할당받은 메모리 반환
	}
	return 0;
}
