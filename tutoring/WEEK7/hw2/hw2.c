#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	char letter;
	char str[100];

	scanf("%s", str);
	while (getchar() != '\n');
	scanf("%c", &letter);

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] == letter)
			printf("%d ", i + 1);
}