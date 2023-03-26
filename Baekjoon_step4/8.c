#include <stdio.h>

int main()
{
	int i, j, n=0, try=0, a, b, swap, h;
	int basket[100] = { 0 };
	scanf_s("%d %d", &n, &try);
	for (i = 1; i <= n; i++)
	{
		basket[i] = i;
	}
	for (i = 1; i <= try; i++)
	{
		h = 0;
		scanf_s("%d %d", &a, &b);
		for (j = a; j < b; j+=2)
		{
			swap = basket[j-h];
			basket[j-h] = basket[b-h];
			basket[b-h] = swap;
			h++;
		}
	}
	for (i = 1; i <= n; i++)
	{
		printf("%d ", basket[i]);
	}
}