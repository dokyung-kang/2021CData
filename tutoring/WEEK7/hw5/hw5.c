#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j;
	char str[100];

	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (str[i] == str[j])
				break;
		}
		if (i == j)
			printf("%c", str[i]);
	}
}