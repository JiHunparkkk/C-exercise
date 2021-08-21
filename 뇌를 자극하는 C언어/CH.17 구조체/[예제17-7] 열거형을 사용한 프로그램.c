/* 초기화되자 않았을 수 있는 로컬 포인터변수가 사용되었다는 오류 */
/*
#include <stdio.h>

enum season {spring,summer,fall,winter};

int main()
{
	enum season ss;
	char *cp;
	ss = spring;

	switch (ss) {
	case spring :
		cp = "inline"; break;
	case summer:
		cp = "swimming"; break;
	case fall :
		cp = "trip"; break;
	case winter :
		cp = "skiing"; break;
	}
	printf("나의 레저활동 => %s\n", cp);
	return 0;
}
*/