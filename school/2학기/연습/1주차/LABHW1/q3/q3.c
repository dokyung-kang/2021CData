#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int arr[20];
	int small[20];
	int big[20];
	int i, n, key;
	int sIndex = 0, bIndex = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	scanf("%d", &key);

	for (i = 0; i < n; i++) {
		if (arr[i] < key)
			small[sIndex++] = arr[i];
		else
			big[bIndex++] = arr[i];
	}
	for (i = 0; i < sIndex; i++)
		printf("%d ", small[i]);
	printf("\n");
	for (i = 0; i < bIndex; i++)
		printf("%d ", big[i]);
}