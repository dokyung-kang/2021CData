#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n1, n2, n3;

	scanf("%d %d %d", &n1, &n2, &n3);

	if (n2 <= n1 && n1 <= n3)
		printf("%d", n1);
	else if (n3 <= n1 && n1 <= n2)
		printf("%d", n1);
	else if (n1 <= n2 && n2 <= n3)
		printf("%d", n2);
	else if (n3 <= n2 && n2 <= n1)
		printf("%d", n2);
	else if (n1 <= n3 && n3 <= n2)
		printf("%d", n3);
	else
		printf("%d", n3);
}