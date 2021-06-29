#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n, j;
	int arr[1000];
	int brr[1000];
	
	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for (j = n - 1; j >= 0; j--)
		printf("%d ", arr[j]);

}