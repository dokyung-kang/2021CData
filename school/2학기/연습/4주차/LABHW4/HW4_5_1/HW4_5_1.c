#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int gcd(int n)
{
	int cnt = 1;

	printf("%d ", n);
	while (n != 1) {
		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;
		printf("%d ", n);
		cnt++;
	}
	return cnt;
}
int main(void)
{
	int n;
	scanf("%d", &n);
	printf("\n%d", gcd(n));
}