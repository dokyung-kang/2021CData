#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int comb(int n, int r)
{
/*
int i, j;
	int total = 1;
	int mul = 1;
	if (r == 0 || r == n)
		return 1;
	else {
		for (i = 1; i <= r; i++) 
			total *= n--;
		for (i = 1; i <= r; i++)
			mul *= i;
		total /= mul;
		return total;
	}
*/
	if (r == 0 || r == n)
		return 1;
	else
		return comb(n - 1, r - 1) + comb(n - 1, r);
}

int main(void)
{
	int n, r;

	printf("Enter n and r:");
	scanf("%d %d", &n, &r);
	printf("%d", comb(n, r));
	return 0;

}