#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char s[20];
	char key;
	int i;
	int prime = 0;

	scanf("%s %c", s, &key);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == key)
		{
			prime = 1;
			break;
		}
	}
	if (prime)
		printf("%d", i + 1);
	else
		printf("-1");
}