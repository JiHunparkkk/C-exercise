#include<stdio.h>

void input_score(int *, int *, int *); // 세 과목의 점수를 입력 받는 함수
int total(int, int, int); // 총점을 구하는 함수
double grade(int); // 평균과 학점을 구하는 함수

char grd; // 학점을 저장할 외부 변수

int main()
{
	int kor, eng, mat, tot;
	double avg;

	input_score(&kor, &eng, &mat);
	tot = total(kor, eng, mat);
	avg = grade(tot);
	printf("평균 : %.1lf, 학점 : %c\n", avg, grd);
	return 0;
}