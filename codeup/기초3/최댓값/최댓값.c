#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b, i;
	double mi1, mi2, div1, div2, sq1 = 1, sq2 = 1;
	double p, mi, mul, div, sq;
	scanf("%d %d", &a, &b);

	p = a + b;
	mi1 = a - b;
	mi2 = b - a;
	mul = a * b;
	div1 = (double)a / b;
	div2 = (double)b / a;
	for (i = 0; i < a; i++)
		sq1 *= b;
	for (i = 0; i < b; i++)
		sq2 *= a;

	if (mi1 >= mi2)
		mi = mi1;
	else
		mi = mi2;
	if (div1 >= div2)
		div = div1;
	else
		div = div2;
	if (sq1 >= sq2)
		sq = sq1;
	else
		sq = sq2;

	if (p >= mi && p >= mul && p >= div && p >= sq)
		printf("%.6f", p);
	else if (mi >= p && mi >= mul && mi >= div && mi >= sq)
		printf("%.6f", mi);
	else if (mul >= mi && mul >= p && mul >= div && mul >= sq)
		printf("%.6f", mul);
	else if (div >= mi && div >= mul && div >= p && div >= sq)
		printf("%.6f", div);
	else
		printf("%.6f", sq);
}