#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void printSet(int s[], int size)
{
	int i;
	printf("{ ");
	for (i = 0; i <= size; i++) {
		printf("%d", s[i]);
		if (i != size)
			printf(", ");
	}
	printf(" }\n");
}
int isin(int s[], int n, int size)
{
	int i;
	for (i = 0; i < size; i++) 
		if (s[i] == n) 
			return 0;
	return 1;

}
int main(void)
{
	int i;
	int s[5];
	int n;

	for (i = 0; i < 5; ) {
		printf("다중집합에 추가할 원소: ");
		scanf("%d", &n);
		if (isin(s, n, i)) {
			s[i] = n;
			printSet(s, i);
			i++;
		}
		else
			printf("%d는 이미 집합에 있음.\n", n);

	}
}