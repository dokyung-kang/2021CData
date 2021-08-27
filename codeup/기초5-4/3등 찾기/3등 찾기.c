#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, n, maxI = 0, max1 = 0, max2 = 0, max3 = 0;
	char name[50] = { 0 };
	int score[50];

	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%c", &name[i]);
		scanf("%d", &score[i]);
	}
	for (i = 0; i < n; i++)
		if (max1 < score[i])
			max1 = score[i];
	for (i = 0; i < n; i++)
		if (max2 < score[i] && score[i] < max1)
			max2 = score[i];
	for (i = 0; i < n; i++)
		if (max3 < score[i] && score[i] < max2)
		{
			max3 = score[i];
			maxI = i;
		}
	printf("%c", name[maxI]);
}