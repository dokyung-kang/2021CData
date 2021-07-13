#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str[1000001];
	int i, len, cnt = 0;

	scanf("%[^\n]s", str);
	for (len = 0; str[len] != '\0'; len++);
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] == ' ')
			cnt++;
	if (str[len - 1] == ' ')
		printf("%d", cnt);
	else
		printf("%d", cnt++);
}