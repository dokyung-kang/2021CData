#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char word[81];
	char newWord[81];
	int i;

	printf("Enter one word: ");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++)
	{
		if ('a' <= word[i] && word[i] <= 'z')
			newWord[i] = word[i] - 32;
		else if ('A' <= word[i] && word[i] <= 'Z')
			newWord[i] = word[i] + 32;
		else
			newWord[i] = word[i];
	}
	newWord[i] = '\0';
	printf("%s", newWord);
}