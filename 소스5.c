#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(void)
{
	printf("�й� :20171722, �̸�: �����\n");
	char a, a1;
	int i, i2,result;
	printf("\n���ڸ� �Է��Ͻÿ�:%c");
	a = _getche();
	printf("\n���ڸ� �Է��Ͻÿ�:%c");
	a1 = _getche();
	if((48 <= a&& a <= 57) && (48<= a1 && a1 <= 57))
	{
		i = a-48;
		i2 = a1-48;
		result = i * i2;
		printf("\n�����:%d",result);
	}
	else if ((48 <= a && a <= 57) && (48 <= a1 && a1 <= 57)==0)
	{
		i = a-48;
		i2 = 1;
		result = i * i2;
		printf("\n�����:%d",result);
	}
	else if ((48 <= a && a >= 57)==0 && (48 <= a1 && a1 >= 57))
	{
		i = a-48;
		i2 = 1;
		result = i * i2;
		printf("\n�����:%d", result);
	}
	else if ((48 <= a && a >= 57)==0 && (48 <= a1 && a1 >= 57) == 0)
	{
		i = 1;
		i2 = 1;
		result = i * i2;
		printf("\n�����:%d",result);
	}

}