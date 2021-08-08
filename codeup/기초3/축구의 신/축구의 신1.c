#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int time, goal;

	scanf("%d %d", &time, &goal);

	while (1)
	{
		if (time < 90)
		{
			goal++;
			time += 5;
		}
		else
			break;
	}
	printf("%d", goal);
}