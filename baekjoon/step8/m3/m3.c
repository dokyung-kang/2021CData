#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t, b, cnt = 1;
	int n, i;

	scanf("%d", &n);
	for (i = 1; n > cnt; ) //i는 줄
		cnt += ++i; //cnt는 i줄까지 있는 분수 개수
	
	if (i % 2 == 0) //짝수일 경우 분모큼
	{
		t = i - (cnt - n); 
		b = 1 + (cnt - n);
	}
	else
	{
		t = 1 + (cnt - n);
		b = i - (cnt - n);
	}
	
	printf("%d/%d\n", t, b);
	
}