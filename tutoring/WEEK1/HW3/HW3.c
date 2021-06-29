#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j, n;

	scanf("%d", &n);
	
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j < i; j++)
			printf(" ");
		printf("**\n");
	}

}

/*
3. 별 계단 출력하기 : n을 입력받고 n층의 별 계단 출력
ex. 5
**
 **
  **
   **
	**
*/