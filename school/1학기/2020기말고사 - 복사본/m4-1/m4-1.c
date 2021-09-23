#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int is_in(char w[], char ch);
int main(void)
{
	char word[20];
	int i;
	int prime;

	scanf("%s", word);
	for (i = 'A'; i <= 'Z'; i++)
	{
		prime = is_in(word, i);
		if (prime == 1)
			printf("%c", i);
	}
}
int is_in(char w[], char ch)
{
	int i;
	for (i = 0; w[i] != '\0'; i++)
		if (w[i] == ch)
			return 0;
	return 1;
}
