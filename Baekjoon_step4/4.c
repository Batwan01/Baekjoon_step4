#include <stdio.h>

int main()
{
	int i, a;
	int arr[100] = { 0 };
	for (i = 0; i < 9; i++)
	{
		scanf_s("%d", &a);
		arr[i] = a;
	}
	int max = arr[0];
	for (i = 0; i < 9; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
			a = i + 1;
		}
		else if (arr[i] == max) a = i + 1;
	}
	printf("%d\n%d" ,max,a);
}