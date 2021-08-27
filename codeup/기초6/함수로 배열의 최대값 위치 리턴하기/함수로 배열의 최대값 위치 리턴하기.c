#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, a, b, d[1010];

int maxi(int a, int b)
{
    int i;
    int max = d[a];
    for (i = a; i <= b; i++)
        if (max < d[i])
            max = d[i];
    for (i = 1; i <= n; i++)
        if (max == d[i])
            return i;
    return i;
}
int main()
{
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        scanf("%d", &d[i]);

    scanf("%d%d", &a, &b);

    printf("%d\n", maxi(a, b));
}