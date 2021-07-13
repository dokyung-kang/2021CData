#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    int n, count = 0;
    int rest[10];
    int i, j;
    int flag;
    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", &n);
        rest[i] = (n % 42);
    }

    for (i = 0; i < 10; i++) 
    {
        flag = 0; 
        for (j = i + 1; j < 10; j++) 
        { 
            if (rest[i] == rest[j]) 
                flag++;
        }
        if (flag == 0) 
            count++; 
    }
    printf("%d", count);
}