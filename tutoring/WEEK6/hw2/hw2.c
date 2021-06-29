#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, k;
	int arr[10];

	for (i = 0; i < 10; i++)
		scanf("%d", &arr[i]);
	scanf("%d", &k);

	printf("%d", arr[k - 1]);
}