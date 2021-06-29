#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	long long int total = 0;
	int num[501];

	scanf("%s", num);

	for (i = 0; num[i] != '\0'; i++)
			total += num[i];

	if (total % 3 == 0)
		printf("1");
	else
		printf("0");
}