#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[100];
	int i;
	int n = 0, total = 0;

	printf("Enter a word: ");
	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++) {
		if ('0' <= str[i] && str[i] <= '9') {
			n += str[i] - 48;
			if ('0' <= str[i + 1] && str[i + 1] <= '9')
				n *= 10;
			else {
				total += n;
				n = 0;
			}
		}
	}
	printf("글자 안의 수의 합은 %d", total);
}