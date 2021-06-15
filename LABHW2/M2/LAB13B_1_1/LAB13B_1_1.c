#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[81];
	char s[81];
	int i, j;
	
	printf("Enter a string: ");
	scanf("%s", str);
	for (i = 0; str[i] != '\0'; i++);
	printf("±æÀÌ´Â %d\n", i);
	for (j = 0; str[j] != '\0'; j++)
		s[j] = str[i - j - 1];
	s[j] = '\0';
	for (i = 0; i < s[i] != '\0'; i++)
		printf("%c\n", s[i]);
}