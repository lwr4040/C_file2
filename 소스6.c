#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void ex_01()
{
	char ch;
	char s[5];
	for (int i = 0; i < 4; i++)
	{
		printf("���ڸ� �Է��Ͻÿ�.");
		scanf_s("%c", &ch);
		s[i] = ch;
		scanf_s("%c", &ch);
			
	}
	s[4] = "\0";
	printf("���ڿ��� %s�Դϴ�.", s);
}
void ex_02()
{
	char str[10];
	printf("���ڿ��� �Է��ϼ���");
	gets_s(str);
	int i = 0;
	for (i = 0; str[i]; i++);
	printf("���ڿ��� ���̴� %d�Դϴ�.", i); 
}
void ex_03()
{
	int i = 0;
	char str[10];
	while (1)
	{
		printf("���ڿ��� �Է��ϼ���.");
		gets_s(str);
		if (str[i] == '\0')
			break;
		for (i = 0; str[i]; i++);
		printf("���ڿ��� ���̴� %d�Դϴ�\n", i);
	}
}
























int main(void)
{

}
