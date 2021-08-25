/* 왜 작동이 안되지??? */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h> // malloc, atoi 함수를 위한 헤더파일
#include<string.h> // strlen 함수를 위한 헤더파일

void str_prn(char**); // 문자열 출력함수 선언

int main(int argc, char **argv)
{
	char temp[80];
	char **str;
	int max;
	int i;

	max = atoi(argv[1]);
	str = (char **)malloc((max + 1) * sizeof(char*));

	i = 0;
	while (1)
	{
		printf("문자열을 입력하세요 :");
		gets(temp);
		if (temp[0] == '\0') break;

		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
		i++;
		if (i == max)
		{
			printf("문자열 입력이 최대값을 모두 채웠습니다.\n");
			break;
		}
	}
	str[i] = 0;
	str_prn(str);
	i = 0;
	while (str[i] != 0)
	{
		free(str[i]);
		++i;
	}
	free(str);
	return 0;
}

void str_prn(char **sp)
{
	while (*sp != 0)
	{
		printf("%s\n", *sp);
		sp++;
	}
}
