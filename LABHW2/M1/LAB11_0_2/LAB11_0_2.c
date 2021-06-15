#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int square2(int num);
int main(void)
{
	int result;
	result = square2(5);
	printf("Á¦°öÀº %d\n", result);

}
int square2(int num)
{
	return num * num;
}