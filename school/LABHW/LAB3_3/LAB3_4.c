#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int hour, minute, totalMinute;

	printf("Enter hour: ");
	scanf("%d", &hour);
	printf("Enter minute: ");
	scanf("%d", &minute);

	totalMinute = 60 * hour + minute;

	printf("Total %d minutes\n", totalMinute);
}