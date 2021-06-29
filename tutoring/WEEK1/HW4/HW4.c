#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, n;

	scanf("%d", &n);

	for (i = 1; i < 6; i++)
		for (j = 1; j < 6; j++)
			if (i + j == n)
				printf("%d %d\n", i, j);
}

/*
4. 두 주사위의 합 : 주사위의 합(n) 입력
1번 주사위 값 오름차순으로 가능한 경우 모두 출력
ex. 5
	1 4
	2 3
	3 2
	4 1
*/