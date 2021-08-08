#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{	
	int n1, n2, n3, n4, n5, n6;
	int lo1, lo2, lo3, lo4, lo5, lo6, bonus;
	int cnt = 0;

	scanf("%d %d %d %d %d %d %d", &lo1, &lo2, &lo3, &lo4, &lo5, &lo6, &bonus);
	scanf("%d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6);

	if (lo1 == n1 || lo1 == n2 || lo1 == n3 || lo1 == n4 || lo1 == n5 || lo1 == n6)
		cnt++;
	if (lo2 == n1 || lo2 == n2 || lo2 == n3 || lo2 == n4 || lo2 == n5 || lo2== n6)
		cnt++;
	if (lo3 == n1 || lo3 == n2 || lo3 == n3 || lo3 == n4 || lo3 == n5 || lo3 == n6)
		cnt++;
	if (lo4 == n1 || lo4 == n2 || lo4 == n3 || lo4 == n4 || lo4 == n5 || lo4 == n6)
		cnt++;
	if (lo5 == n1 || lo5 == n2 || lo5 == n3 || lo5 == n4 || lo5 == n5 || lo5 == n6)
		cnt++;
	if (lo6 == n1 || lo6 == n2 || lo6 == n3 || lo6 == n4 || lo6 == n5 || lo6 == n6)
		cnt++;

	if (cnt <= 2)
		printf("0");
	else if (cnt == 3)
		printf("5");
	else if (cnt == 4)
		printf("4");
	else if (cnt == 5)
	{
		if (bonus == n1 || bonus == n2 || bonus == n3 || bonus == n4 || bonus == n5 || bonus == n6)
			printf("2");
		else
			printf("3");
	}
	else
		printf("1");
}