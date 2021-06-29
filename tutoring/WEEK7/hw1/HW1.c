#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	char str[100];

	scanf("%s", str);

	for (i = 0; str[i] != '\0'; i++)
		printf("%c\n", str[i]);
}


/*
1. 입력받은 문자열을 한 문자씩 출력해보자.
ex. abcd
a
b
c
d
*/