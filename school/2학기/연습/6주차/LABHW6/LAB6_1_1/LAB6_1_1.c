#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[81];
	int len;
	int i;

	printf("Enter a string: ");
	scanf("%s", str);

	for (len = 0; str[len] != '\0'; len++);

	printf("±æÀÌ´Â %d\n", len);

	for (i = len - 1; i >= 0; i--)
		printf("%c\n", str[i]);
}