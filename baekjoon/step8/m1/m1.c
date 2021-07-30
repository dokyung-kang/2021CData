#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int A, B, C;
	int total;

	scanf("%d %d %d", &A, &B, &C);
		
	total = A / (C - B) + 1;

	if (C <= B) //손익분기점이 생기지 않는 경우는 C(노트북 가격)의 값이 B(가변비용)보다 작거나 같은 경우
		printf("-1\n");
	else
		printf("%d\n", total);
}

/*
노트북 가격이 C만원으로 책정되었다고 한다. 
일반적으로 생산 대수를 늘려 가다 보면 어느 순간 
총 수입(판매비용)이 총 비용(=고정비용A+가변비용B)보다
많아지게 된다. 
최초로 총 수입이 총 비용보다 많아져 
이익이 발생하는 지점을 
손익분기점(BREAK-EVEN POINT)이라고 한다.
A + B*x < C*x
A < C*x - B*x
A < (C - B)*x
A/(C - B) < x
*/