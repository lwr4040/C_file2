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
		
		printf("������ �Է��ϼ���:");
		scanf_s("%d", &input);
		sum += input;
		if (min > input)
			min = input;
		if (max < input)
			max = input;
		from[i] = input;
	}
	/*printf("������ ��: %d",sum);
	printf("�ִ밪��:%d", max);
	printf("�ּڰ���:%d", min);*/

}
void ex_from()
{
	int to[4] = { 0 };
	int from[4] = { 0 };
	for (int i = 0; i < 4; i++)
	{
		int input = 0;
		printf("������ �Է��ϼ���:");
		scanf_s("%d", &input);
		from[i] = input;
	}
	for (int i = 0; i < 4; i++)
	{
		to[i] = from[i];
		printf("%d��° �� %d\n", i + 1, to[i]);
	}
}
int main()
{
	ex_from();
}