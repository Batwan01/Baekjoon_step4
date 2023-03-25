#include <stdio.h>

int main()
{
	signed int n = 0;
	int i, a, count = 0,max=0, min=1000;
	signed int static arr[1000000] = { 0 };
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf_s(" %d", &a);
		arr[i] = a;
	}
	for (i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}
	printf("%d %d", min, max);
}