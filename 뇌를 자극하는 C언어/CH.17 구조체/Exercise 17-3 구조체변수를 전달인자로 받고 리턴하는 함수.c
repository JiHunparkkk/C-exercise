/*
#include<stdio.h>

struct student {
	int num;
	char name[20];
	int score[5];
	double avg;
};
struct student average(struct student); // ����ü������ �����͸� ����ϰ� ����� ���ϴ� �Լ��� ����

int main()
{
	struct student sd = { 315,"ȫ�浿",{ 82,93,74,90,65 } }; // ����ü������ ����� �ʱ�ȭ
	sd = average(sd); // �Լ��� ȣ���Ҷ� ����ü������ ����
	printf("��� : %.1lf\n", sd.avg); // �Լ��� ����� ����� ���

	return 0;
}

struct student average(struct student s) // �Ű������� ���ϰ��� ��� ����ü
{
	int i,sum=0;
	
	printf("�й� : %d\n", s.num);
	printf("�̸� : %s\n", s.name);
	for (i = 0; i < 5; i++) {
		printf("���� : %5d", s.score[i]);
		sum += s.score[i];
	}
	s.avg = sum / 5.0;
	printf("\n");

	return s; // ����� ������ ����ü ������ �ٽ� ����
}
*/