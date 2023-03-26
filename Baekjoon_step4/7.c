#include <stdio.h>

int main()
{
	int i, j,a, b=0,count=0;
	int rest[100] = { 0 };
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &a);
		rest[i] = a % 42;
	}
	for (i = 0; i < 10; i++)
	{
		b = 0;
		for (j = i + 1; j < 10; j++)
		{
			if (rest[i] == rest[j])
			{
				b++;
			}
		}
		if (b >= 1) count++;
	}
	printf("%d", 10-count);
}