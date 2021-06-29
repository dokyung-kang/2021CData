#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n, key, num;
	int flag = 0, count = 0;

	scanf("%d %d", &n, &key);

	for (i = 1; i <= n; i++)
	{
		scanf("%d", &num);
		if (key == num && flag == 0)
		{
			count = i;
			flag = 1;
		}
	}
	if (count > 0)
		printf("%d", count);
	else
		printf("not found");
}