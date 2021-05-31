#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num;
	int fatorial = 1;

	printf("Enter a number(>=2): ");
	scanf("%d", &num);

	printf("%d! = ", num);
	for (i = num; i >= 2; i--)
	{
		fatorial *= i;
		printf("%d * ", i);
	}
	printf("1 = %d", fatorial);


}