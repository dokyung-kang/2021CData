#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int score;
	char grade;

	printf("Enter your grade: ");
	scanf("%c", &grade);

	if (grade == 'A')
		printf("Congratulation\n");
	else if (grade == 'B')
		printf("Okay, try harder\n");
	else if (grade == 'C')
	{
		printf("Enter your score: ");
		scanf("%d", &score);
		printf("Try harder, you need to get %d next time\n", score + 10);
	}
	else if (grade == 'D' || grade == 'F')
		printf("Sorry, you need to take this course again\n");
	else
		printf("Wrong grade\n");
}