#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void f(int k);
int main()
{
	int n;
	scanf("%d", &n);
	f(n);
	return 0;
}
void f(int k)
{
	if (k < 0)
		printf("negative");
	else if (k == 0)
		printf("zero");
	else
		printf("positive");
}
