#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char word[81], newWord[81];
	int i, j;

	printf("Enter one word: ");
	scanf("%s", word);

	for (i = 0; word[i] != '\0'; i++);
	for (j = 0; word[j] != '\0'; j++)
		newWord[j] = word[i - j - 1];
	newWord[j] = '\0';
	printf("%s", newWord);
}