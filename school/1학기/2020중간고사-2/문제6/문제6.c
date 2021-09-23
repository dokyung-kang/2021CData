#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i = 1, key, num, count = 0;

	scanf("%d", &key);
	
	do
	{
		scanf("%d", &num);

		if (num == key)
			count = i;
		i++;
	} while (num != -1);

	if (count > 0)
		printf("%d", count);
	else
		printf("not found");
}