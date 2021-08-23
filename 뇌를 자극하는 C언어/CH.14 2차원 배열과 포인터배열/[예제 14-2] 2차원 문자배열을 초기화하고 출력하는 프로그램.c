#include<stdio.h>

int main()
{
	char animal[][10] = { "monkey","elephant","dog","sheep","pig","lion","tiger","puma","turtle","fox" };
	int i;
	int count;

	count = sizeof(animal) / sizeof(animal[0]);

	for (i = 0; i < count; i++)
	{
		printf("%s\n", animal[i]);
	}
	return 0;
}
