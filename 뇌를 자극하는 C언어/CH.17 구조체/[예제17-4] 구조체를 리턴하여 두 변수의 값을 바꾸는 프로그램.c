/*
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

struct vision { // �κ��� �÷��� ������ ����ü
	double left; // ���� �� �÷� ������ ���
	double right; // ������ �� �÷� ������ ���
};
struct vision exchange(struct vision); // �� �÷��� �ٲٴ� �Լ�

int main()
{
	struct vision robot; // ����ü ���� ����

	printf("�κ�Ʈ�� �÷��� �Է��ϼ���(��,��) : ");
	scanf("%lf%lf", &robot.left, &robot.right);
	robot = exchange(robot); // ��ȯ�Լ� ȣ��
	printf("�ٲ� �κ�Ʈ�� �÷�(��,��) : %.1lf, %.1lf\n",robot.left, robot.right);
	return 0;
}

struct vision exchange(struct vision robot) // ����ü�� �����ϴ� �Լ�
{
	double temp;
	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;
	return robot; // ����ü ������ �����Ѵ�.
}
*/