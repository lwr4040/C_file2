#include<stdio.h>
void ex()
{
	int a;
	int arr[5] = { 0 };
	printf("정수를 입력하시오:");
	scanf_s("%d", &a);
	while (a >= 1)
	{
		int r = a % 10;
		a /= 10;
		if (0 <= r && r <= 4)
		{
			arr[r]++;
		}
	}
	int max = -1;
	int max2 = -1;
	for (int i = 0; i < 5; i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			max2 = i;
		}
	}
	printf("나중에 가장 많이 나온 숫자는 %d\n", max2);
	printf("나온 횟수는 %d\n", max);
}
int main(void)
{
	ex();
}