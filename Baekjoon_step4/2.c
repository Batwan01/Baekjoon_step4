#include <stdio.h>

int main()
{
	short n = 0;
	int i, a, b, count = 0;
	int arr[10000] = { 0 };
	scanf_s("%hd %d", &n, &b);
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a);
		arr[i] = a;
	}

	for (i = 0; i < n; i++)
	{
		if (arr[i] < b) printf("%d ", arr[i]);
	}
}