#include<stdio.h>

int main()
{
	char *ptr_ary[5]; // 포인터 배열 선언
	int i; // 반복제어변수

	ptr_ary[0] = "dog"; // 각 배열요소에 문자열상수(포인터)를 대입
	ptr_ary[1] = "elephant";
	ptr_ary[2] = "horse";
	ptr_ary[3] = "tiger";
	ptr_ary[4] = "lion";

	for (i = 0; i < 5; i++)
	{
		printf("%s\n", ptr_ary[i]);
	}
	return 0;
}
