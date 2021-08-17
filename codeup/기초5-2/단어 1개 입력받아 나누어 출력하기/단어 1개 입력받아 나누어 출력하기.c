#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	char len[100001];

	scanf("%s", len);

	for (i = 0; len[i] != '\0'; i++)
		printf("\'%c\'\n", len[i]);
}