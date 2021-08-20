/*
#include <stdio.h>

struct address { // 주소록을 만들 구조체 선언
	char name[20]; 
	int age;
	char tel[20];
	char addr[80];
};

int main()
{
	struct address list[5] = { {"홍길동",23,"010-1234-5678","을릉도 독도"},
	{"이순신",35,"010-1111-2222","서울 건천동"},
	{"장보고",19,"010-2222-3333","경남 창원시"},
	{"유관순",15,"010-3333-5555","충남 천안"},
	{"안중근",45,"010-5555-6666","황해도 해주"} };

	int i;

	for (i = 0; i < 5; i++)
	{
		printf("%10s%5d%15s%20s\n", list[i].name, list[i].age, list[i].tel, list[i].addr); // 각 배열요소의 멤버들을 하나씩 참조하여 출력
	}
	return 0;
}
*/