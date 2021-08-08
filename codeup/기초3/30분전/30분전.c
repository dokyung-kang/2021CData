#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int h, m;

	scanf("%d %d", &h, &m);

	if (m < 30)
	{
		if (h == 0)
			printf("23 %d", 30 + m);
		else
			printf("%d %d", h - 1, 30 + m);
	}
	else
		printf("%d %d", h, m - 30);
}


// 20 - 30    60 - ( 20 - 30)   60 - 20 + 30