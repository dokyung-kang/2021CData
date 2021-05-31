#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	switch (num)
	{
		case 1: 
			printf("Spring");
			break;
		case 2:
			printf("Suummer");
			break;
		case 3:
			printf("Fall");
			break;
		case 4:
			printf("Winter");
			break;
		default:
			printf("Invalid number");
			break;
	}
}