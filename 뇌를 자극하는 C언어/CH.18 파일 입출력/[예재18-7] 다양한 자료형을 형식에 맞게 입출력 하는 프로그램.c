/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE *ifp, *ofp; // ���� �����ͺ��� ����
	char name[20];
	int age;
	double height;
	int res; // fscanf �Լ��� ���ϰ��� ������ ����

	ifp = fopen("a.txt", "r");
	if (ifp == NULL) {
		printf("�Է� ���� ���� ����.\n");
		return 1;
	}
	ofp = fopen("b.txt", "w");
	if (ofp == NULL) {
		printf("�Է� ���� ���� ����.\n");
		return 1;
	}

	while (1) {
		res = fscanf(ifp, "%s%d%lf", name,&age, &height); // �� �������� �Է����Ŀ� �°� �Է�
		if (res == EOF) break;
		fprintf(ofp, "%.1lf %d %s\n", height, age, name); // ��� ���Ŀ� �°� ���Ϸ� ���
	}

	fclose(ifp);
	fclose(ofp);
	return 0;
}
*/