#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sumList(int arr[], int size);
int maxList(int arr[], int size);
int indexSearch(int arr[], int size, int key);
int main(void)
{
	int list[10] = { 10, 20, 30, 40, 50, 40, 30, 20, 10, 0 };
	int value;
	int keyIndex;

	printf("합은 %d\n", sumList(list, 10));

	printf("가장 큰 수는 %d\n", maxList(list, 10));

	printf("탐색할 값은? ");
	scanf("%d", &value);

	if (indexSearch(list, 10, value) != -1)
		printf("값 %d를 갖는 첫번째 값은 %d번째에 있습니다.", value, indexSearch(list, 10, value));
	else
		printf("값 %d를 갖는 값은 없습니다.", value);
}
int sumList(int arr[], int size)
{
	int i, total = 0;
	for (i = 0; i < size; i++)
		total += arr[i];
	return total;
}
int maxList(int arr[], int size)
{
	int i;
	int max = arr[0];

	for (i = 0; i < size; i++)
		if (max < arr[i])
			max = arr[i];
	return max;
}
int indexSearch(int arr[], int size, int key)
{
	int i;
	for (i = 0; i < size; i++)
		if (key == arr[i])
			return i + 1;
	return -1;
}