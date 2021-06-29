#define _CRT_SECURE_NO_WARNINGS
#define MAX_STRING 81
#include <stdio.h>
int main(void)
{
	char str[MAX_STRING];
	int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;
	int i;

	printf("문자열 %d 입력: ", MAX_STRING);
	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++)
	{
		if ('a' == str[i] || str[i] == 'A')
			countA++;
		else if ('e' == str[i] || str[i] == 'E')
			countE++;
		else if ('i' == str[i] || str[i] == 'I')
			countI++;
		else if ('o' == str[i] || str[i] == 'O')
			countO++;
		else if ('u' == str[i] || str[i] == 'U')
			countU++;
	}
	printf("a of A: %d\n", countA);
	printf("o of O: %d\n", countO);
	printf("e of E: %d\n", countE);
	printf("i of I: %d\n", countI);
	printf("u of U: %d\n", countU);
}