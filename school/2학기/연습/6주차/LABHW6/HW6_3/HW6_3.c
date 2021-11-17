#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char word[81], newWord[81];
	int i, j = 0;
	int len;

	printf("Enter one word: ");
	scanf("%s", word);

	for (len = 0; word[len] != '\0'; len++);
	for (i = len - 1; i >= 0; i--) {
		newWord[j] = word[i];
		j++;
	}
	newWord[j] = '\0';
	printf("The reversed word is %s\n", newWord);

}