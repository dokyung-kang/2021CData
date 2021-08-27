#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a[7];
	int i;
	int max1 = 0, max2 = 0, cnt = 0; 

	for (i = 0; i < 7; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < 7; i++)
		if (max1 < a[i])
			max1 = a[i];
	for (i = 0; i < 7; i++)
		if (max1 == a[i])
			cnt++;
	if (cnt == 1)
	{
		for (i = 0; i < 7; i++)
			if (max2 < a[i] && a[i] < max1)
				max2 = a[i];
	}
	else
		max2 = max1;
	printf("%d\n", max1);
	printf("%d\n", max2);
}