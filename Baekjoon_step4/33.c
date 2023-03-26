#include <stdio.h>

int main()
{
	signed int n = 0;
	int i, a, max, min;
	signed int static arr[1000000] = { 0 };
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a);
		arr[i] = a;
	}
	max = arr[0];
	min = arr[0];
	for (i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}
	printf("%d %d", min, max);
}