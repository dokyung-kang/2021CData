#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void printStar(int n);
int main() {
    int n;

    scanf("%d", &n);

    printStar(n);
}
void printStar(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++)
            printf(" ");
        printf("**\n");
    }
}