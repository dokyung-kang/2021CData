#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, a, d, n;

	scanf("%d %d %d", &a, &d, &n);

	for (i = 1; i < n; i++)
		a += d;
	printf("%d\n", a);

}

/*
2. 등차수열 : 시작 값(a), 공차(d), 몇 번째 수(n) 세 정수를 입력받고
그 등차수열의 n번째 수를 출력한다.
ex. 1 3 5
	13
*/