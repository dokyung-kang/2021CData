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
				cnt -= 1; //���ʿ��� �̵��̶� ��ĭ ������ �ʿ� ���
			remain -= (move * 2); //���� �Ÿ� �����Ƿ�
			cnt += 2; //���� �Ÿ� �ѹ��� �̵���Ų�Ŷ�
			if (remain <= 0)
			{
				if (remain == -(move))
					cnt -= 1; //���� �Ÿ��� ������ �� �� �� �������� �ǹǷ�
				break;
			}
			move++;
		}
		printf("%d\n", cnt);
	}
}