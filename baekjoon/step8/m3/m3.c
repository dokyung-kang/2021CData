#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int t, b, cnt = 1;
	int n, i;

	scanf("%d", &n);
	for (i = 1; n > cnt; ) //i�� ��
		cnt += ++i; //cnt�� i�ٱ��� �ִ� �м� ����
	
	if (i % 2 == 0) //¦���� ��� �и�ŭ
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