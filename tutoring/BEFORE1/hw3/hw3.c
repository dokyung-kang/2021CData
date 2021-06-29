#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, n1, n2, n3;

	printf("세자리 정수를 입력하세요: ");
	scanf("%d", &num);

	n1 = num / 100;
	n2 = num % 100 / 10;
	n3 = num % 100 % 10;

	printf("%d\n", n3);
	printf("%d\n", n2);
	printf("%d\n", n1);
}

/*
4. 세자리 정수를 입력받고, 각각 자릿수를 작은 것 부터 따로 출력한다.
ex. 세자리 정수를 입력하세요: 356
	 6
	 5
	 3
*/