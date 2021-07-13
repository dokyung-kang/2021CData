#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char arr[100];
	int i, n, total = 0;

	scanf("%d", &n);
	scanf("%s", arr);
	for (i = 0; i < n; i++)
		total += arr[i] - '0';
	printf("%d", total);
}