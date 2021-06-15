#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int pow(int a, int b);
int main(void)
{
	int i;
	
	for (i = 0; i < 11; i++)
		printf("5 ^ %2d == %d\n", i, pow(5, i));

}
int pow(int a, int b)
{
	int i;
	int total = 1;
	for (i = 0; i < b; i++)
		total *= a;
	return total;
}