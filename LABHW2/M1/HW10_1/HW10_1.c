#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printManyChars(char ch, int num);
int main(void)
{
	char c;
	int n;

	printf("Enter a character to print: ");
	scanf("%c", &c);
	printf("Etner the number of charactoers: ");
	scanf("%d", &n);

	printManyChars(c, n);

	return 0;
}
void printManyChars(char ch, int num)
{
	int i;
	for (i = 0; i < num; i++)
		printf("%c", ch);

	return;
}