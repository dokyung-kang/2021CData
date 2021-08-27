#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n, d[110];

int f()
{
    int i;
    int max = 0;
    for (i = 0; i < n; i++)
        if (d[i] > max)
            max = d[i];
    for (i = 0; i < n; i++)
        if (d[i] == max)
            return i + 1;
}
int main(void)
{
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &d[i]);

    printf("%d", f());
    return 0;
}