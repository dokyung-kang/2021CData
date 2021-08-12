#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double a, result;
	int b, d;
	int i;

	scanf("%lf", &a);
	result = a;
	scanf("%d", &b);
	for (i = 0; i < b; i++)
	{
		scanf("%d", &d);
		result = result + (result * d * 0.01);
	}
	
	printf("%.f\n", result - a);
	if (a == result)
		printf("same");
	else if (a < result)
		printf("good");
	else
		printf("bad");

}