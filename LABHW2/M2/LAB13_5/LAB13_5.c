#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int binary[8], rBinary[8];
	int i, n;
	int count = 0;
	int temp = 0;
	printf("Enter ¾ç¼ö(<256): ");

	scanf("%d", &n);

	for (i = 0; n != 0; i++)
	{
		binary[i] = n % 2;
		n /= 2;
		count++;
	}
	for (i = 0; i < count; i++)
		rBinary[i] = binary[count - i - 1];
	for (i = 0; i < count; i++)
		printf("%d", rBinary[i]);
}