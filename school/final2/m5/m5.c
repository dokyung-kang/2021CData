/*5¹ø ¹®Á¦*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int isHiddenPassword(char passwd[], char input[])
{
	int i, j = 0;
	int len;
	for (len = 0; passwd[len] != '\0'; len++);
	for (i = 0; passwd[i] != '\0'; i++)
	{
		for ( ; input[j] != '\0'; j++)
		{
			if (passwd[i] == input[j])
				break;
		}
		if (input[j] == '\0')
			break;
	}
	if (passwd[i] == '\0' || i == len)
		return 1;
	else
		return 0;

}
int main(void)
{
	char passwd[20], input[20];
	int i;
	scanf("%s", passwd);
	for (i = 0; i < 3; i++) {
		scanf("%s", input);
		if (isHiddenPassword(passwd, input))
			printf("1");
		else
			printf("0");
	}
	printf("\n");
}
