#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num;
	long long factorial = 1;

	printf("Enter a number: ");
	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		factorial *= i;
		printf("%d! = %lld\n", i, factorial);
	}
}