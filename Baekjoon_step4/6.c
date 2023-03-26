#include <stdio.h>

int main()
{
	int i,num;
	int student[100] = { 0 };
	for (i = 1; i <= 28; i++)
	{
		scanf_s("%d", &num);
		student[num]++;
	}
	for (i = 1; i <= 30; i++)
	{
		if (student[i] != 1) printf("%d\n", i);
	}
}