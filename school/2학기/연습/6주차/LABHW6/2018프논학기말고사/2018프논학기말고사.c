#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void mergeString(char c[], char a[], char b[])
{
	int i, j;
	int index = 0;
	int minI, temp;

	for (i = 0; a[i] != '\0'; i++)
		c[index++] = a[i];
	for (i = 0; b[i] != '\0'; i++)
		c[index++] = b[i];
	c[index] = '\0';
	for (i = 0; i < index - 1; i++) {
		minI = i;
		for (j = i + 1; j < index; j++)
			if (c[j] < c[minI])
				minI = j;
		temp = c[i];
		c[i] = c[minI];
		c[minI] = temp;
	}
}

int main(void)
{
	char word1[10], word2[10];
	char mergedWord[20];

	scanf("%s", word1);
	scanf("%s", word2);
	mergeString(mergedWord, word1, word2);
	printf("%s\n", mergedWord);
}