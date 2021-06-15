#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char word[100];
	char newWord[100];
	int i, j = 0;

	printf("Enter one word: ");
	scanf("%s", word);
	for (i = 0; word[i] != '\0'; i++)
		if ('A' <= word[i] && word[i] <= 'Z')
			newWord[j++] = word[i];
	newWord[j] = '\0';
		printf("%s", newWord);
}