#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[100];
	int i;
	int total = 0;

	printf("단어를 입력하세요(빈칸없이):");
	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++) {
		if ('A' <= str[i] && str[i] <= 'Z')
			total += str[i] - 64;
 		if ('a' <= str[i] && str[i] <= 'z')
			total += str[i] - 96;
	}
	printf("점수는 %d", total);
}