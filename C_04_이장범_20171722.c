#include<stdio.h>
#include<conio.h>
int main(void)
{
	printf("�й� :20171722, �̸�: �����\n");
	

	char a,a1;
	int i, i2;
	a = getche();
	a1 = getche();
	printf("���ڸ� �Է��Ͻÿ�:%c", a);
	printf("���ڸ� �Է��Ͻÿ�:%c", a1);
	if (1 <= a && a <= 49 && a>=57 && 1 <= a1 && a1 <= 49 && a1 >= 57)
	{
		a = 1;
		a1 = 1;
	}
	else
	{
		i = atoi(a);
		i2 = atoi(a1);
		int result = i * i2;
		printf("%d", result);
	}
	
}