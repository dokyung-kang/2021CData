#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
    char c;

    while (c != 'q')
    {
        scanf(" %c", &c);
        printf("%c\n", c);
    }
}