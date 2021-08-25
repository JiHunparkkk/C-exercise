#include<stdio.h>

struct student {
	int num;
	char name[20];
	int score[5];
	double avg;
};
struct student average(struct student); // 구조체변수의 데이터를 출력하고 평균을 구하는 함수의 선언

int main()
{
	struct student sd = { 315,"홍길동",{ 82,93,74,90,65 } }; // 구조체변수의 선언과 초기화
	sd = average(sd); // 함수를 호출할때 구조체변수를 전달
	printf("평균 : %.1lf\n", sd.avg); // 함수가 계산한 평균을 출력

	return 0;
}

struct student average(struct student s) // 매개변수와 리턴값이 모두 구조체
{
	int i,sum=0;
	
	printf("학번 : %d\n", s.num);
	printf("이름 : %s\n", s.name);
	for (i = 0; i < 5; i++) {
		printf("점수 : %5d", s.score[i]);
		sum += s.score[i];
	}
	s.avg = sum / 5.0;
	printf("\n");

	return s; // 평균이 구해진 구조체 변수를 다시 리턴
}
