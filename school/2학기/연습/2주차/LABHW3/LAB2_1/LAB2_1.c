#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print_add(int a, int b);
int main(void)
{
	int x = 0;
	int y = 1;
	print_add(x, y);

	x = 10;
	y = 11;
	print_add(x, y);

}

void print_add(int a, int b)
{
	printf("%d와 %d의 합은 %d입니다, \n", a, b, a + b);
	printf("합수가 수행되었습니다.\n");
}