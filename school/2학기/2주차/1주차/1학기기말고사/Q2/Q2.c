#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int searchArrayKey(char arr[], int searchKey);
int main(void)
{
	char s[20];
	char key;

	scanf("%s %c", s, &key);

	printf("%d", searchArrayKey(s, key));
}
int searchArrayKey(char arr[], int searchKey)
{
	int i;
	for (i = 0; arr[i] != '\0'; i++)
		if (arr[i] == searchKey)
			return i + 1;
	return -1;
}