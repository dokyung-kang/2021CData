#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int totalSecond, hour, minute, second;
	
	totalSecond = 14000;
	hour = totalSecond / 3600;
	minute = totalSecond % 3600 / 60;
	second = totalSecond % 3600 % 60;

	printf("%d seconds:\n", totalSecond);
	printf("%dh %dm %ds\n", hour, minute, second);
}