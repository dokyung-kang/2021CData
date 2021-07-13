#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j;
	char w[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char word[20];
	char new[27];
	int count = 0;
	int prime = 1;
	scanf("%s", word);

	for (i = 0; w[i] != '\0'; i++)
	{
		for (j = 0; word[j] != '\0'; j++)
			if (w[i] == word[j])
			{
				prime = 0;
				break;
			}
		if (prime == 1)
		{
			new[count] = w[i];
			count++;
		}
		prime = 1;
	}
	new[count] = '\0';
	printf("%s", new);
}
