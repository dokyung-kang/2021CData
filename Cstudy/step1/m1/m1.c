#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num, cnt = 0, i, j;
	int x = 0, y = -1, f = 1, n;
	int a[50][50] = { 0, };
	/*
	num:입력값,  cnt: 대입값, 
	x, y: 행렬위치, f: 증감부호, n: 반복횟수
	*/
	scanf("%d", &num);

	n = num;

	while (n > 0)
	{
		//열증감
		for (i = 0; i < n; i++)
		{
			y += f;
			a[x][y] = ++cnt;
		}
		n--;
		//행 한줄 채우고 n 감소
		//행증감
		for (i = 0; i < n; i++)
		{
			x += f;
			a[x][y] = ++cnt;
		}
		f *= -1; //두 for문 증가하면서 값 저장했으니 이제 감소하면서 저장
	}
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}
	
}