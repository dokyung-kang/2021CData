#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int totalSecond, hour, minute, second;

	printf("Enter the total seconds: ");
	scanf("%d", &totalSecond);

	hour = totalSecond / 3600;
	minute = totalSecond % 3600 / 60;
	second = totalSecond % 3600 % 60;

	printf("---Calculation Result---\n");
	printf("%d seconds\n", totalSecond);
	printf("%dh %dm %ds\n", hour, minute, second);
}