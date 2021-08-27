#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, k, d[1010];
int lower_bound(int k)
{
    int i;
    for (i = 1; i <= n; i++)
        if (d[i] >= k)
            return i;
    return i;
    
}
int main()
{
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        scanf("%d", &d[i]);

    scanf("%d", &k);

    printf("%d\n", lower_bound(k));
}