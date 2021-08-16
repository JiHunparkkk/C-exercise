/*
#include <stdio.h>

int main()
{
	int score[3][4]; // 3명의 4과목 점수를 저장할 2차원 배열 선언
	int i, j; // 2중 for문을 위한 반복 제어변수
	int tot; // 총점을 저장할 변수
	double avg; // 평균을 저장할 변수

	for (i = 0; i < 3; i++) // 3명이므로 3번 반복
	{
		printf("네 과목의 점수를 입력하세요 : "); // 입력 안내 메세지
		for (j = 0; j < 4; j++) // 4과목이므로 4번 반복
		{
			scanf("%d", &score[i][j]); // 점수 입력
		}
	}

	for (i = 0; i < 3; i++) // 3명이므로 3번 반복
	{
		tot = 0; // 누적변수이므로 0으로 초기화
		for (j = 0; j < 4; j++) // 4과목이므로 4번 반복
		{
			tot += score[i][j]; // 점수를 총점에 누적한다.
		}
		avg = tot / 4.0; // 한 명의 총점을 모두 누적한 후에 평균계산
		printf("총점 : %d, 평균 :%.2lf\n", tot, avg); // 총점, 평균 출력
	}
	return 0;
}
*/