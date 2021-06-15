#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[100];
	int i, n = 0, total = 0;

	printf("Enter a word: ");
	scanf("%s", str);
	for (i = 0; str[i] != '\0'; i++)
	{
		if (48 <= str[i] && str[i] <= 57)
			n = 10 * n + str[i] - 48;
		if (48 > str[i + 1] || str[i + 1] > 57)
		{
			total += n;
			n = 0;
		}
	}
	printf("%d", total);
}