#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int n, i;
    int cnt = 0;
    int a[10000];

    scanf("%d", &n);

    if (n == 0)
        printf("0");

    for (i = 0; n != 0; i++)
    {
        a[i] = n % 2;
        n /= 2;
        cnt++;
    }
    for (i = cnt - 1; i >= 0; i--)
        printf("%d", a[i]);

    return 0;
}