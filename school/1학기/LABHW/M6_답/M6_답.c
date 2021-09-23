#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n, key, num;
	int found = 0;

	scanf("%d %d", &n, &key);

	for (i = 1; i <= n; i++)
	{
		scanf("%d", &num);
		if (key == num)
		{
			found = 1;
			break;
		}
	}
	if (found == 1)
		printf("%d", i);
	else
		printf("not found");
}