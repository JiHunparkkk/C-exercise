/*
#include <stdio.h>

union student {
	int num;
	double grade;
};

int main()
{
	union student s1 = { 315 }; // ����ü������ ����� �ʱ�ȭ

	printf("�й� : %d\n", s1.num);
	s1.grade = 4.4;
	printf("���� : %.1lf\n", s1.grade);
	printf("�й� : %d\n", s1.num); // �й��� �ʱⰪ�� ��������� ���ؼ� ������!!
	return 0;
}
*/