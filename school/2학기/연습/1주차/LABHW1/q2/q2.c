#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char s[20];
	char key;
	int i;

	scanf("%s %c", s, &key);
	for (i = 0; s[i] != '\0'; i++) {
		if (key == s[i]) {
			printf("%d", i + 1);
			break;
		}
	}
	if (s[i] == '\0')
		printf("-1");
}