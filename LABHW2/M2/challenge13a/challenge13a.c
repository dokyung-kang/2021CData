#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char str1[100];
	char str2[100];
	int same = 1;
	int i, j, k;
	printf("Enter the first word: ");
	scanf("%s", str1);
	printf("Enter the second word: ");
	scanf("%s", str2);

	for (i = 0; str1[i] != '\0'; i++);
	for (j = 0; str2[j] != '\0'; j++);
	if (i >= 0)
		k = i;
	else
		k = j;
	for (i = 0; i < k; i++)
		if (str1[i] != str2[i])
		{
			same = 0;
			break;
		}
	if (same)
		printf("두 단어는 같다.");
	else
		printf("두 단어는 다르다");
}