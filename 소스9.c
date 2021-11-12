#include<stdio.h>

void ex_01(void) 
{
	char ch;
	char in[5];
	for (int i = 0; i < 4; i++)
	{
		printf("문자를 입력하시오.");
		scanf_s("%c", &ch);
		in[i] = ch;
		scanf_s("%c", &ch);
	}
	in[4] = '\0';
	printf("문자열은 %s입니다.",in);
	
}
void ex_02(void)
{
	char w[6];
	printf("문자열을 입력하시오:");
	gets(w);
	printf("문자열은 %s입니다.", w);
}
void ex_03(void)
{

}


































int main(void)
{
	ex_01();
	ex_02();
}