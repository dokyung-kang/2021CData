#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, n, count;
	int total = 0;
	int sum = 0;
	int arr[50];

	scanf("%d", &count);

	for (j = 1; j <= count; j++)
		total += j;
	for (i = 0; i < count - 1; i++)
	{
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	printf("%d", total - sum);
}