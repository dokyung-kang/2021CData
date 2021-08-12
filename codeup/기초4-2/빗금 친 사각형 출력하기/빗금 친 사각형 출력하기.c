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
            if ((i == 1) || (j == 1) || (i == num) || (j == num)) //맨 위 아래 왼 오
                printf("*");
            else if (k == 1) //k가 1이면 간격 없이 다 채워짐
                printf("*");
            else if ((i + j) % k == 1) //가로 세로 위치 나누기 k해서 1나온거 *찍으면 맞음
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