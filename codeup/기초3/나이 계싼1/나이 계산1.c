#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n1, n2;
	int age; 

	scanf("%d %d", &n1, &n2);

	n1 /= 10000;
	if (n2 <= 2)
		n1 += 1900;
	else
		n1 += 2000;

	age = 2012 - n1 + 1;

	printf("%d", age);
}