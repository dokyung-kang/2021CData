#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	double const PI = 3.141592;
	int radius;
	double area;

	printf("Enter a radius: ");
	scanf("%d", &radius);

	area = PI * radius * radius;

	printf("The area of a circle with %d:\t%f.", radius, area);
}