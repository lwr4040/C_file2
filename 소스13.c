#include<stdio.h>
#include<limits.h>
void ex_s()
{
	int from[4];
	int max= INT_MIN;
	int min = INT_MAX;
	int sum = 0;
	for (int i = 0; i < 4; i++)
	{
		int input = 0;
		
		printf("정수를 입력하세요:");
		scanf_s("%d", &input);
		sum += input;
		if (min > input)
			min = input;
		if (max < input)
			max = input;
		from[i] = input;
	}
	/*printf("정수의 합: %d",sum);
	printf("최대값은:%d", max);
	printf("최솟값은:%d", min);*/

}
void ex_from()
{
	int to[4] = { 0 };
	int from[4] = { 0 };
	for (int i = 0; i < 4; i++)
	{
		int input = 0;
		printf("정수를 입력하세요:");
		scanf_s("%d", &input);
		from[i] = input;
	}
	for (int i = 0; i < 4; i++)
	{
		to[i] = from[i];
		printf("%d번째 값 %d\n", i + 1, to[i]);
	}
}
int main()
{
	ex_from();
}