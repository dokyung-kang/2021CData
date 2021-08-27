#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long int n;


long long int sqrt(long long int N)
{
    long long int i;
    long long int max = 0;
    for (i = 0; i <= N; i++)
    {
        if (i * i > N)
            break;
        else
            max = i;
    }
    return max;
}
int main()
{
	scanf("%lld", &n);
	printf("%d\n", sqrt(n));
	return 0;
}