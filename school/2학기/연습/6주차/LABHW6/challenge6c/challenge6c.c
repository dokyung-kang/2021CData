#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX_STRING 81
int main(void)
{
	char str[MAX_STRING];
	int countA = 0, countE = 0, countI = 0, countO = 0, countU = 0;
	int i = 0;

	printf("문자열 입력 (문자수 %d 이하): ", MAX_STRING);
	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++) {
		if ('a' == str[i] || 'A' == str[i])
			countA++;
		else if ('e' == str[i] || 'E' == str[i])
			countE++;
		else if ('i' == str[i] || 'I' == str[i])
			countI++;
		else if ('o' == str[i] || 'O' == str[i])
			countO++;
		else if ('u' == str[i] || 'U' == str[i])
			countU++;
	}
	printf("a of A: %d\n", countA);
	printf("e of E: %d\n", countE);
	printf("i of I: %d\n", countI);
	printf("o of O: %d\n", countO);
	printf("u of U: %d\n", countU);

}