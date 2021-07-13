#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double a, b, total = 0;
	scanf("%lf", &a);
	scanf("%lf", &b);
	total = a / b;
	printf("%.9lf", total);
}