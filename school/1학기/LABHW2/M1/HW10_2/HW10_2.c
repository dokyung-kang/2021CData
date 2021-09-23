#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void findNPrintBiggest(int a, int b, int c);
int main(void)
{
	int num1, num2, num3;

	printf("Enter tree numbers: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	findNPrintBiggest(num1, num2, num3);

	return 0;
}
void findNPrintBiggest(int a, int b, int c)
{
	int big;
	if (a > b && a > c)
		big = a;
	else if (b > a && b > c)
		big = b;
	else
		big = c;
	printf("The Biggest number is %d.", big);

	return;
		
}