#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int s[20];
	int less[20];
	int more[20];
	int i, num, n;
	int lessN = 0, moreN = 0;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
		scanf("%d", &s[i]);
	scanf("%d", &num);
	for (i = 0; i < n; i++)
	{
		if (s[i] < num)
			less[lessN++] = s[i];
		else
			more[moreN++] = s[i];
	}
	for (i = 0; i < lessN; i++)
		printf("%d ", less[i]);
	printf("\n");
	for (i = 0; i < moreN; i++)
		printf("%d ", more[i]);

}