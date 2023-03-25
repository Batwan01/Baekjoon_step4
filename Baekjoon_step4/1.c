#include <stdio.h>

int main()
{
	int n = 0, i,a,b,count=0;
	int arr[100] = { 0 };
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a);
		arr[i] = a;
	}
	scanf_s("%d", &b);
	for (i = 0; i < n; i++)
	{
		if (arr[i] == b) count++;
	}
	printf("%d", count);
}