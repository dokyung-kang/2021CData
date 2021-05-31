#define _CRT_SECURE_NO_WARNINGS
#define CONVERSION_FACTOR 9.0 / 5.0
#include <stdio.h>
int main(void)
{
	double celsius, fahrenheit;
	const int BASE = 32;

	printf("Enter a celsius temperature: ");
	scanf("%lf", &celsius);

	fahrenheit = celsius * CONVERSION_FACTOR + BASE;

	printf("Fahrenheit Equivalent : %f\n", fahrenheit);
}