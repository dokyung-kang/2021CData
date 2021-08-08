#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	char c;

	scanf("%c", &c);

	if (c == 'A')
		printf("best!!!");
	else if (c == 'B')
		printf("good!!");
	else if (c == 'C')
		printf("run!");
	else if (c == 'D')
		printf("slowly~");
	else
		printf("what?");
}