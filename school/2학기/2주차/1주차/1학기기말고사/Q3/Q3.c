#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int s[20];
	int low[20];
	int high[20];
	int i, key, n;
	int lowN = 0, highN = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &s[i]);
	scanf("%d", &key);
	for (i = 0; i < n; i++)
	{
		if (s[i] < key)
			low[lowN++] = s[i];
		else
			high[highN++] = s[i];
	}
	for (i = 0; i < lowN; i++)
		printf("%d ", low[i]);
	printf("\n");
	for (i = 0; i < highN; i++)
		printf("%d ", high[i]);

}