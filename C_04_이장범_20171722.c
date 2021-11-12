#include<stdio.h>
#include<conio.h>
int main(void)
{
	printf("학번 :20171722, 이름: 이장범\n");
	

	char a,a1;
	int i, i2;
	a = getche();
	a1 = getche();
	printf("숫자를 입력하시오:%c", a);
	printf("숫자를 입력하시오:%c", a1);
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