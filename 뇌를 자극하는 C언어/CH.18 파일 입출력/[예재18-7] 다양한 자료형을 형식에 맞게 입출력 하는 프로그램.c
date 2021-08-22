/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE *ifp, *ofp; // 파일 포인터변수 선언
	char name[20];
	int age;
	double height;
	int res; // fscanf 함수의 리턴값을 저장할 변수

	ifp = fopen("a.txt", "r");
	if (ifp == NULL) {
		printf("입력 파일 개방 실패.\n");
		return 1;
	}
	ofp = fopen("b.txt", "w");
	if (ofp == NULL) {
		printf("입력 파일 개방 실패.\n");
		return 1;
	}

	while (1) {
		res = fscanf(ifp, "%s%d%lf", name,&age, &height); // 각 데이터의 입력형식에 맞게 입력
		if (res == EOF) break;
		fprintf(ofp, "%.1lf %d %s\n", height, age, name); // 출력 형식에 맞게 파일로 출력
	}

	fclose(ifp);
	fclose(ofp);
	return 0;
}
*/