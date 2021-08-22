/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int num;
	char name[20];

	printf("학번을 입력하세요 : ");
	scanf("%d", &num);
	fflush(stdin); // 버퍼에 데이터를 지웠는데 왜 이름을 출력 할 수 없지??? --> fflush의 정의  = 출력 버퍼를 비우는 함수, 따라서 표준입력인 stdin을 fflush에 
	printf("이름을 입력하세요 : ");                                                            //넣는 것은 함수 설계의도에 위배됨. POSIX에서 표준을 만들어 Visual studio 2013이하버전에서는 가능하게 하였으나 2015이상 버전부터는 C의 표준을 따라가기위해 fflush(stdin)이 아무런 동작을 하지 않도록 돌려놓았다고 한다...
	fgets(name, sizeof(name), stdin); // scanf함수가 학번을 입력한 후 버퍼에 남겨놓은 새줄 문자를 fgets함수가 데이터로 그대로 받아들이기 때문에 이름은 입력 받지 못함

	printf("학번 : %d\n", num);
	printf("이름 : %s\n", name);
	return 0;
}
*/