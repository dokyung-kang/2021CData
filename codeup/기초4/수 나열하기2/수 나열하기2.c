#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double a, r, n;
	int i;

	scanf("%lf %lf %lf", &a, &r, &n);
	
	for (i = 1; i < n; i++)
		a *= r;
	
	printf("%.f", a);
}