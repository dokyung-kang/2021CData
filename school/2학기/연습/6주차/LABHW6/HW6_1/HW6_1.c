#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[81];
	char newWord[181];
	int i;

	printf("Enter one word: ");
	scanf("%s", str);
	printf("word given: %s\n", str);
	for (i = 0; str[i] != '\0'; i++) {
		if ('a' <= str[i] && str[i] <= 'z')
			newWord[i] = str[i] - 32;
		else if ('A' <= str[i] && str[i] <= 'Z')
			newWord[i] = str[i] + 32;
		else
			newWord[i] = str[i];
	}
	newWord[i] = '\0';
	printf("new word: ");
	printf("%s", newWord);
}