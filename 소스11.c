
#include <stdio.h>
int main(void)
{
	char str[10] = { 0 };
	char str2[10] = { 0 };
	printf("문자열 입력:");
	gets(str);
	int a = 0;
	//{a,p,p,l,e,null,null,null,null,null}
	for (int i = sizeof(str) / sizeof(str[0]) - 1; i >= 0; i--)
	{
		if (str[i] != NULL)
		{
			str2[a] = str[i];
			a++;
		}
	}
	printf("%s", str2);
}

