#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void changeToDigitEncode(char s[], char e[])
{
	int i;
	int index = 0;

	for (i = 0; s[i] != '\0'; i++) {
		if ('A' <= s[i] && s[i] <= 'I')
			e[index++] = s[i] - 16;
		else {
			e[index++] = (s[i] - 64) / 10 + '0';
			e[index++] = (s[i] - 64) % 10 + '0';
		}
	}
	e[index] = '\0';

}
int main(void)
{
	char sentence[20], encoded[40];

	scanf("%s", sentence);
	changeToDigitEncode(sentence, encoded);
	printf("%s\n", encoded);
}