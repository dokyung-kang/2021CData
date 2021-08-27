#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, d[100010], k;

int f(int K)
{
    int i;
    for (i = 1; i <= n; i++)
        if (d[i] == K)
            return i;
    return -1;
}

int main()
{
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        scanf("%d", &d[i]);

    scanf("%d", &k);
    printf("%d\n", f(k));
}