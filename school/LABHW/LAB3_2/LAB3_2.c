#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int totalMinute, hour, minute;

	printf("Enter the total mintes: ");
	scanf("%d", &totalMinute);

	hour = totalMinute / 60;
	minute = totalMinute % 60;

	printf("%d minutes\n", totalMinute);
	printf("%dh %dm\n", hour, minute);
}