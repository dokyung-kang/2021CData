#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_STRING 81
#define BOOL int
#define TRUE 1
#define FLASE 0
BOOL isPalindrome(char str[]);
int main(void)
{
	char str[MAX_STRING];

	printf("* Palindrome üũ\n\n");
	printf("���ڿ� �Է�(���ڼ� %d����): ", MAX_STRING);
	scanf("%s", str);

	if (isPalindrome(str))
		printf("\"%s\" is a Palindrome\n\n", str);
	else
		printf("\"%s\" isn't a Palindrome\n\n", str);
	return 0;
}
BOOL isPalindrome(char str[])
{
	int len, i;
	for (len = 0; str[len] != '\0'; len++);
	for (i = 0; i < len / 2; i++) {
		if (str[i] != str[len - 1 - i])
			return 0;
	}
	return 1;
}