#include<stdio.h>

void input_score(int *, int *, int *); // �� ������ ������ �Է� �޴� �Լ�
int total(int, int, int); // ������ ���ϴ� �Լ�
double grade(int); // ��հ� ������ ���ϴ� �Լ�

char grd; // ������ ������ �ܺ� ����

int main()
{
	int kor, eng, mat, tot;
	double avg;

	input_score(&kor, &eng, &mat);
	tot = total(kor, eng, mat);
	avg = grade(tot);
	printf("��� : %.1lf, ���� : %c\n", avg, grd);
	return 0;
}