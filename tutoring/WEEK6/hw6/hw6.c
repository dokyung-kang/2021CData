#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n, count;
	int arr[24] = { 0 };

	scanf("%d", &count);

	for (i = 0; i < count; i++)
	{
		scanf("%d", &n);
		arr[n]++;
	}
	for (i = 1; i <= 23; i++)
		printf("%d  ", arr[i]);
}