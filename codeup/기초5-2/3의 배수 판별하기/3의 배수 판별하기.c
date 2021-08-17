#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, total = 0;
	char arr[500];

	scanf("%s", arr);

	for (i = 0; arr[i] != '\0'; i++)
		total += arr[i];

	if (total % 3 == 0)
		printf("1");
	else
		printf("0");
}