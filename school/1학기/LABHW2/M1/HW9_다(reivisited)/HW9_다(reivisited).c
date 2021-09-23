#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void cycleNb(int num);
int main(void)
{
	int n;

	printf("Enter a number: ");
	scanf("%d", &n);
	while (n != -1)
	{
		cycleNb(n);
		printf("Enter a number: ");
		scanf("%d", &n);
	}

}
void cycleNb(int num)
{
	int i;
	int count = 1;
	printf("%d ", num);
	for (i = 0; num != 1; i++)
	{
		if (num % 2 == 0)
			num /= 2;
		else
			num = num * 3 + 1;
		printf("%d ", num);
		count++;
	}
	printf("\n±æÀÌ´Â %d \n", count);
	return;
}