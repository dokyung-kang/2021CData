#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, num;
	int sum = 0;

	scanf("%d", &num);

	for (i = 1; sum < num; i++)
		sum += i;	

	printf("%d", sum);
}

/*
1. 여기까지! 이제 그만~
num을 입력받고 1부터 그 수보다 같거나 커질때까지 더해나간다.
합이 입력된 정수보다 크거나 같아지는 경우 그때까지의 합늘 출력한다.
ex. 57
	 66
*/