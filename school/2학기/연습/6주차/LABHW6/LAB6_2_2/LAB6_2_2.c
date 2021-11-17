#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[100];
	char newWord[100];
	int i, j = 0;

	printf("Enter one word: ");
	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++) {
		if ('A' <= str[i] && str[i] <= 'Z')
			newWord[j++] = str[i];
	}
	newWord[j] = '\0';
	printf("%s", newWord);
}