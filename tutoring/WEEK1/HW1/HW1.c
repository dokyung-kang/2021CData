#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n1, n2;

	scanf("%d %d", &n1, &n2);

	for (i = 0; i <= n1; i++)
		if (i % n2 != 0)
			printf("%d ", i);
	return 0;
}


/*
1. n의 배수 통과 : 반복 범위(limit), 제외할 값(n) 두 정수를 입력받고
1부터 반복범위까지의 수 중 제외할 값의 배수를 제외한 모든 수를 출력한다.
ex. 10 3
	 1 2 4 5 7 8 10
*/