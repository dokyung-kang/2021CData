#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char c = 'A';
	int n = 100;
	double d = 3.14;

	char* pC;
	int *pN;
	double* pD;

	pC = &c;
	pN = &n;
	pD = &d;

	printf("%c %d %c\n", c, pC, *pC);
	printf("%d %d %d\n", n, pN, *pN);
	printf("%f %d %f\n\n", d, pD, *pD);

	*pC = 'Z';
	*pN = 199;
	*pD = 3.1415;

	pC++;
	pN++;
	pD++;

	printf("%c %d %c\n", c, pC, *pC);
	printf("%d %d %d\n", n, pN, *pN);
	printf("%f %d %f\n\n", d, pD, *pD);

	pC = pC + 2;
	pN = pN + 2;
	pD = pD + 2;

	printf("%c %d %c\n", c, pC, *pC);
	printf("%d %d %d\n", n, pN, *pN);
	printf("%f %d %f\n\n", d, pD, *pD);


}