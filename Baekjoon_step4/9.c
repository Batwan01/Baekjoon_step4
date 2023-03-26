#include <stdio.h>

int main()
{
	int max, n=0, i, a;
	float sum = 0;
	float score[1000] = { 0 };
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &a);
		score[i] = a;
	}
	max = score[0];
	for (i = 0; i < n; i++)
	{
		if (max < score[i]) max = score[i];
	}
	for (i = 0; i < n; i++)
	{
		sum += score[i] / max * 100;
	}
	printf("%f",sum / n);
}