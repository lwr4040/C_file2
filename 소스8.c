#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char s1[10];
	char s2[10];

	printf("���ڿ��� �� �� �Է��Ͻÿ�:");
	scanf("%s %s", s1, s2);
	int s1_size = sizeof(s1) / sizeof(s1[0]);
	int s2_size = sizeof(s2) / sizeof(s2[0]);
	if (s1_size = s2_size)
		printf("�� ���ڿ��� ���� �ٸ��ϴ�");
	else {
		for (int i = 0; i <= s1_size; i++)
		{
			if (s1[i] != s2[i])
			{
				printf("�� ���ڿ��� ���� �ٸ��ϴ�");
				break;
			}
			if (s1[i] == s2[i] && i == s1_size - 1)
				printf("�� ���ڿ��� �����ϴ�.");
		}
	}



}
