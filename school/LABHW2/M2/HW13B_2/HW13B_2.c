#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[100];
	int i, total = 0;

	printf("Enter one word: ");
	scanf("%s", str);
	for (i = 0; str[i] != '\0'; i++)
		if (48 <= str[i] && str[i] <= 57)
			total += str[i] - 48;
	printf("안에 있는 숫자들의 합은 %d", total);
}