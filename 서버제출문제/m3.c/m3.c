#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int addNumbers(char s[]);
int main(void)
{
	char word[81];
	int i;

	scanf("%s", word);

	printf("%d\n", addNumbers(word));

	return 0;
}

int addNumbers(char s[])
{
	int i;
	int total = 0;
	for (i = 0; s[i] != '\0'; i++)
		if (48 <= s[i] && s[i] <= 57)
			total += s[i] - 48;
	return total;
}
