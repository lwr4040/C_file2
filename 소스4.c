#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int k;
	printf("���ڸ� �Է��Ͻÿ�:");
	scanf_s("%d", &k);
	for (int i = 0; i < k+1; i++)
	{
		for (int j = k; j > i ; j--)
		{
			printf(" ");
		}
		for (int j = -i; j <= i; j= j++)
		{
				printf("%d",abs(j));
		}
		printf("\n");
	}
	
}
5