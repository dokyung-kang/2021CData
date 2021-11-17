#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n;
	int total = 0;

	scanf("%d", &n);
	while (n != -1) {
		for (i = 2; i < n; i++) 
			if (n % i == 0)
				break;
		if (i == n)
			total += n;
		scanf("%d", &n);
	}
	printf("%d", total);
}