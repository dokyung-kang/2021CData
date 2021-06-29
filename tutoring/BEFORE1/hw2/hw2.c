#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int num1, num2, num3, odd = 0, even = 0;
	printf("세 정수를 입력하세요: ");
	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1 % 2 == 0)
		even += num1;
	else
		odd += num1;
	if (num2 % 2 == 0)
		even += num2;
	else
		odd += num2;
	if (num3 % 2 == 0)
		even += num3;
	else
		odd += num3;

	printf("짝수의 합: %d 홀수의 합: %d\n", even, odd);
}


/*
2. 정수 3개를 입력받고, 각각의 숫자들이 짝수인지/홀수인지 판별해
짝수끼리의 합과 홀수끼리의 합을 구해 출력한다.
ex. 세 정수를 입력하세요: 2 4 7
	 짝수의 합 : 6, 홀수의 합 : 7
저는 끝났어요!
다 한 친구는 채팅으로 알려주세요~!
홀수 : odd, 짝수 : even
*/