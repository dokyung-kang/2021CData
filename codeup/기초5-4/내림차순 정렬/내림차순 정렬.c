#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int arr[10001];
    int n, i, j, temp;

    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        scanf("%d", &arr[i]);

    for (i = 1; i <= n; i++) {
        for (j = n; j >= i; j--)
        {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (i = 1; i <= n; i++)
        printf("%d\n", arr[i]);
}