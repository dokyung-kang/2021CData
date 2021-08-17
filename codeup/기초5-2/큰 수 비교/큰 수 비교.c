#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, len1, len2;

	char n1[100];
	char n2[100];

	scanf("%s %s", n1, n2);

	for (len1 = 0; n1[len1] != '\0'; len1++);
	for (len2 = 0; n2[len2] != '\0'; len2++);

	if (len1 > len2)
		printf("%s %s", n2, n1);
	else if (len2 > len1)
		printf("%s %s", n1, n2);
	else
	{
		for (i = 0; n1[i] != '\0'; i++)
		{
			if (n1[i] > n2[i])
			{
				printf("%s %s", n2, n1);
				break;
			}
			else if (n2[i] > n1[i])
			{
				printf("%s %s", n1, n2);
				break;
			}
		}
	}

}