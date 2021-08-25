#include<stdio.h>
#include<string.h> // 문자열 처리를 위한 헤더파일

int main()
{
	char animal[][10] = { "monkey","elephant","dog","sheep","pig","lion","tiger","puma","turtle","fox" }; // 배열의 선언과 초기화
	int i; // 반복 제어변수
	int count; // 문자열의 개수를 저장할 변수
	int total; // 배열의 전체 크기를 저장할 변수
	int stored = 0; // 문자열이 저장된 크기를 저장할 변수
	double waste; // 낭비되는 공간의 크리를 저장할 변수

	total = sizeof(animal); // 배열의 전체크기 계산
	count = total / sizeof(animal[0]); // 문자열의 개수구하기

	for (i = 0; i < count; i++) // 문자열의 개수만큼 반복
	{
		printf("%s\n", animal[i]); // 문자열 출력
		stored += strlen(animal[i])+1; // 문자열의 길이를 계산하여 누적, 널문자 포함
	}
	waste = total - stored; // 배열전체크기에서 문자열길이 빼서 계산

	printf("낭비되는 기억공간의 비율 : %.2lf%%\n", waste/total *100); // 낭비되는 비율을 계산하여 출력

	return 0;
}
