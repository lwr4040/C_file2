#include<stdio.h>

void ex_01(void) 
{
	char ch;
	char in[5];
	for (int i = 0; i < 4; i++)
	{
		printf("���ڸ� �Է��Ͻÿ�.");
		scanf_s("%c", &ch);
		in[i] = ch;
		scanf_s("%c", &ch);
	}
	in[4] = '\0';
	printf("���ڿ��� %s�Դϴ�.",in);
	
}
void ex_02(void)
{
	char w[6];
	printf("���ڿ��� �Է��Ͻÿ�:");
	gets(w);
	printf("���ڿ��� %s�Դϴ�.", w);
}
void ex_03(void)
{

}


































int main(void)
{
	ex_01();
	ex_02();
}