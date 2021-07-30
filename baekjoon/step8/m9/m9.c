#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int	T, i;	
	int	x, y;	
	int	cnt;	
	int	remain;	
	int	move;	

	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		scanf("%d %d", &x, &y);
		cnt = 0;
		remain = y - x;
		move = 1;
		while (remain > 0)
		{
			if (remain < move)
				cnt -= 1; //양쪽에서 이동이라 두칸 움직일 필요 없어서
			remain -= (move * 2); //양쪽 거리 같으므로
			cnt += 2; //양쪽 거리 한번에 이동시킨거라서
			if (remain <= 0)
			{
				if (remain == -(move))
					cnt -= 1; //남은 거리가 음수라 한 번 덜 움직여도 되므로
				break;
			}
			move++;
		}
		printf("%d\n", cnt);
	}
}