#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	srand(time(NULL));
	printf("난수 출력: %d\n", rand() % 100);
	printf("난수 출력: %d\n", rand() % 100);
	printf("난수 출력: %d\n", rand() % 100);
	printf("난수 출력: %d\n", rand() % 100);
	printf("난수 출력: %d\n", rand() % 100);

}