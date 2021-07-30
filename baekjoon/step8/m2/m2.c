#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n, num = 1, cnt = 1;

	scanf("%d", &n);
	while(1)
	{
		if (n <= num)
		{
			printf("%d\n", cnt);
			break;
		}
		num += 6 * cnt;
		cnt++;
	}
}

/*
1 - 1
2~7 - 2
8~91 - 3
20~37 - 4
38~61 - 5
62~70 - 6
*/