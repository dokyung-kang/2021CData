#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int len1, len2;
	char str1[10], str2[10];
	int i, flag = 1;

	printf("Enter the first word: ");
	scanf("%s", str1);
	printf("Enter the second word: ");
	scanf("%s", str2);

	for (len1 = 0; str1[len1] != '\0'; len1++);
	for (len2 = 0; str2[len2] != '\0'; len2++);

	if (len1 != len2)
		printf("두 단어는 다르다");
	else {
		for (i = 0; str1[i] != '\0'; i++) 
			if (str1[i] != str2[i]) {
				flag = 0;
				break;
			}
		if (flag)
			printf("두 단어는 같다.");
		else
			printf("두 단어는 다르다.");
	}
	
}