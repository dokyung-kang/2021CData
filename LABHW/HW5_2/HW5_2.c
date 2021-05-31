#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double const PI = 3.141592;
	int radius;
	double area, circumference;

	printf("Enter a radius: ");
	scanf("%d", &radius);

	area = PI * radius * radius;
	circumference = PI * radius * 2;

	printf("The area of a circle with %d:\t%f\n", radius, area);
	printf("The circumference of a circle with %d:\t%f\n", radius, circumference);
}