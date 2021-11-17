#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[100];
	int i;

	printf("Enter one word: ");
	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++) {
		if ('A' <= str[i] && str[i] <= 'Z')
			printf("%c\n", str[i]);
	}
}