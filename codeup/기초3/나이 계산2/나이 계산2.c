#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n1, n2;
	int age;

	scanf("%d %d", &age);

	n1 = 2012 - age + 1;

	if (n1 < 2000)
		n2 = 1;
	else
		n2 = 3;

	printf("%d %d", n1 % 100, n2);
}