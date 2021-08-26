/*
#include<stdio.h>

int main()
{
	int a = 0x4;
	int b = 0x80000004; //  b의 값은 -214783644
	unsigned int c = 0x80000004; // c의 값은 214783652

	printf("a=%d, b=%d, c=%u\n", a, b, c); // a,b,c의 값을 확인
	printf("a<<2 => %d\n", a << 2); // 왼쪽으로 2비트 이동, 4를 곱한다.
	printf("a>>2 => %d\n", a >> 2); // 오른쪽으로 2비트 이동, 4를 나눈다.
	printf("a>>3 => %d\n", a >> 3); // 모든비트가 0으로 채워진다.
	printf("b<<1 => %d\n", b << 1); // 부호비트가 잘려나간다.
	printf("b>>1 => %d\n", b >> 1); // 왼쪽의 남는 비트는 부호비트로!
	printf("c>>1 => %d\n", c >> 1); // 왼쪽의 남는 비트는 0으로!
	return 0;
}
*/