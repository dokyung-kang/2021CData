#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int stringEqual(const char *s1, const char* s2)
{

	while (*s1){
		if (*s1++ != *s2++)
			return 1;
	}
	if (*s2 != '\0')
		return 1;
	else
		return 0;
	
}

int main(void)
{
	char string1[50];
	char string2[50];

	printf("Enter the first string:");
	scanf("%s", string1);
	printf("Enter the second string:");
	scanf("%s", string2);

	if (stringEqual(string1, string2) == 0)
		printf("두개의 문자열은 같다\n");
	else
		printf("두개의 문자열은 다르다\n");
}