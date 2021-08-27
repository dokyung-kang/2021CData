#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int p, int q) { if (p == 0) return q; return gcd(q % p, p); }

long long int lcm(int a, int b) 
{
    long long int minN;
    long long int maxN;
    if (minN > maxN)
    {
        minN = b;
        maxN = a;
    }
    else
    {
        minN = a;
        maxN = b;
    }
    return minN / gcd(maxN, minN) * maxN;
}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%lld\n", lcm(a, b));
}