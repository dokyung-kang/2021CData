#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	int total = 0;
	char str[81];

	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++)
		if (48 <= str[i] && str[i] <= 57)
			total += str[i] - 48;
	printf("%d", total);

	return 0;
}