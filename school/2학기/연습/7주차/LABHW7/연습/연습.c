#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int data[5] = { 10, 20, 30, 40, 50 };
	int* p = data;

	printf("%d %u %p\n\n", p, p, p);

	printf("%d %d\n", p, *p);
	printf("%d\n", *p++);
	printf("%d %d\n\n", p, *p);

	p = data;
	printf("%d %d\n", p, *p);
	printf("%d\n", (*p)++);
	printf("%d %d\n", p, *p);
}