#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int num, k;
    scanf("%d %d", &num, &k);

    for (int i = 1; i <= num; i++) 
    {
        for (int j = 1; j <= num; j++)
        {
            if ((i == 1) || (j == 1) || (i == num) || (j == num)) //�� �� �Ʒ� �� ��
                printf("*");
            else if (k == 1) //k�� 1�̸� ���� ���� �� ä����
                printf("*");
            else if ((i + j) % k == 1) //���� ���� ��ġ ������ k�ؼ� 1���°� *������ ����
                printf("*");
            else 
                printf(" ");
        }
        printf("\n");
    }
}

/*
**^**^**^*
**  *  * *
*  *  *  *
* *  *  **
**  *  * *
*  *  *  *
* *  *  **
**  *  * *
*  *  *  *
**********
*/