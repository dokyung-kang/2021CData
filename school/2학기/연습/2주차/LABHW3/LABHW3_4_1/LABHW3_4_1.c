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
int main(void)
{
	int i;
	int s[5];

	for (i = 0; i < 5; i++) {
		printf("다중집합에 추가할 원소: ");
		scanf("%d", &s[i]);
		printSet(s, i);
	}
}