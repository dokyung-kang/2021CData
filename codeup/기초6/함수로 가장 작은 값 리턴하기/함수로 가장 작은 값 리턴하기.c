#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n;

long long int d[110];

long long int f()
{
    int i;
    long long int min = d[1];
    for (i = 1; i <= n; i++)
        if (d[i] < min)
            min = d[i];
    return min;
}
int main()
{
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        scanf("%lld", &d[i]);

    printf("%lld", f());
    return 0;
}