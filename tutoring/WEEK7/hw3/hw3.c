#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j = 0;
	char str[21];
	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++)
		printf("%c", str[i] + 2);
	printf("\n");
	for (i = 0; str[i] != '\0'; i++)
		printf("%c", (str[i] * 7) % 80 + 48);

}