#include <stdio.h>

int main()
{
	int i,j,n,try;
	int ball, a, b;
	int basket[100] = { 0 };
	scanf_s("%d %d", &n, &try);
	for (i = 0; i < try; i++)
	{
		scanf_s("%d %d %d", &a, &b, &ball);
		for (j = a; j <= b; j++)
		{
			basket[j] = ball;
		}
	}
	for (i = 1; i <= n; i++)
	{
		printf("%d ", basket[i]);
	}
}