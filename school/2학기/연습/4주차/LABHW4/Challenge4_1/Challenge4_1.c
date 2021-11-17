#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int gcd(int x, int y);
int main(void)
{
	int a, b, big, small;

	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);

	if (a < b) {
		big = b;
		small = a;
	}
	else {
		big = a;
		small = b;
	}
	printf("%d와 %d의 최대공약수는 %d\n", a, b, gcd(big, small));
}

int gcd(int x, int y)
{
	int r;
	r = x % y;
	while (r != 0) {
		x = y;
		y = r;
		r = x % y;
	}
	return y;
}