#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void cycleNb(int n);
int main(void)
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	cycleNb(num);
	return 0;
}
void cycleNb(int n)
{
	int count;

	printf("%d ", n);
	count = 1;
	while (n > 1)
	{
		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;

		printf("%d ", n);
		count++;
	}
	printf("\n±æÀÌ´Â %d\n", count);
	return 0;
}
