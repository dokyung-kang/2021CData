#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int n[4];
	int i, sum1 = 0, sum2 = 0;
	int ms, max1 = 0, min1 = 0;
	int max = -999;
	int min = 999;
	int prime;
	for (i = 0; i <= 3; i++)
		scanf("%d", &n[i]);
	for (i = 0; i <= 3; i++)
	{
		if (n[i] > max) //최댓값 구하기
			max = n[i];
		if (n[i] < min) //최솟값 구하기
			min = n[i];
	}
	sum1 += max;
	sum1 += min; //최댓값 최솟값의 합을 sum1에 넣음
	for (i = 0; i <= 3; i++)
	{
		if (n[i] == max && max1 == 0) //만일 최댓값이 앞에 안나왔으면 이제 나왔으니 max1 변수값 1로 바꿈
			max1 = 1;
		else if (n[i] == min && min1 == 0) //최솟값도 최댓값이랑 똑같이 적용
			min1 = 1;
		else //앞에 최댓값, 최솟값이 한 번 나왔거나 최댓값, 최솟값이 아닐 경우 n2 배열에 순서대로 넣고 합을 sum2에
			sum2 += n[i];
	}
	max1 = 0; //max1, min1 변수 또 쓸거라 다시 0으로 초기화
	min1 = 0;
	if (sum1 > sum2) 
	{
		prime = 1;
		ms = sum1 - sum2;
	}
	else
	{
		prime = 2;
		ms = sum2 - sum1;
	}
	if (prime == 1)//sum1이 더 클경우
	{
		for (i = 0; i <= 3; i++) 
		{
			if (n[i] == max && max1 == 0) //최댓값이고 앞에 최댓값이 나온적 없으면 더하고 이제 최댓값 나왔으니 max1에 1값으로 바꿈
			{
				n[i] += ms;
				max1 = 1;
			}
			else if (n[i] == min && min1 == 0) //최솟값도 똑같이 적용
			{
				n[i] += ms;
				min1 = 1;
			}
			else //나머지는 이미 앞에 최댓값이나 최솟값이 나왔거나 최대최소값이 아닐경우
				n[i] -= ms;
		}
	}
	else //앞이랑 똑같은데 두 합의 차를 더하고 빼는게 반대
		for (i = 0; i <= 3; i++)
		{
			if (n[i] == max && max1 == 0)
			{
				n[i] -= ms;
				max1 = 1;
			}
			else if (n[i] == min && min1 == 0)
			{
				n[i] -= ms;
				min1 = 1;
			}
			else
				n[i] += ms;
		}
	for (i = 0; i <= 3; i++) //마지막으로 배열 출력
		printf("%d ", n[i]);
}