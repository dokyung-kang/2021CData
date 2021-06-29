#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int gcd(int p, int q) { if (p == 0) return 1; return gcd(q % p, p);}
long long int lcm(int n1, int n2)
