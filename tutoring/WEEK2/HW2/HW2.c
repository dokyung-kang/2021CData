#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, k, n;

	scanf("%d", &n);

	for (i = n; i >= 1; i--)
	{
		for (k = 1; k < i; k++)
			printf(" ");
		for (j = 1; j <= n; j++)
			printf("*");
		printf("\n");
	}
}

/*
평행사변형 출력 : 평행사변형 높이 n 입력
밑변과 높이가 같은 평행사변형ㅇ을 출력한다
ex. 4
   ****
  ****
 ****
****
*/