#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, count, n;
	int min = 23;
	int arr[10000];

	scanf("%d", &count);
	for (i = 0; i < count; i++)
	{
		scanf("%d", &arr[i]);
		if (min > arr[i])
			min = arr[i];
	}
	printf("%d", min);
}