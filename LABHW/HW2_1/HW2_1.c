#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int midterm, final;

	midterm = 100;
	final = 90;

	printf("이름\t\t중간\t학기말\t평균\n");
	printf("Suehee Pak\t%d\t%d\t%d\n", midterm, final, (midterm + final) / 2);
}