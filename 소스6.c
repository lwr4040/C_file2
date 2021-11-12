#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void ex_01()
{
	char ch;
	char s[5];
	for (int i = 0; i < 4; i++)
	{
		printf("문자를 입력하시오.");
		scanf_s("%c", &ch);
		s[i] = ch;
		scanf_s("%c", &ch);
			
	}
	s[4] = "\0";
	printf("문자열은 %s입니다.", s);
}
void ex_02()
{
	char str[10];
	printf("문자열을 입력하세요");
	gets_s(str);
	int i = 0;
	for (i = 0; str[i]; i++);
	printf("문자열의 길이는 %d입니다.", i); 
}
void ex_03()
{
	int i = 0;
	char str[10];
	while (1)
	{
		printf("문자열을 입력하세요.");
		gets_s(str);
		if (str[i] == '\0')
			break;
		for (i = 0; str[i]; i++);
		printf("문자열의 길이는 %d입니다\n", i);
	}
}
























int main(void)
{

}
