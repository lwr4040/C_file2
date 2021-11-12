#include<stdio.h>

int is_same_str()
{
	
	char s[2][50];
	int i;
	do {
			printf("\n문자열 입력:");
			gets(s[0]);

			if (s[0][0] == '\0')
				break;

			printf("문자열 입력:");
			gets(s[1]);

			i = 0;
			while (s[0][i] && s[1][i]) {
				if (s[0][i] != s[1][i])
					break;
				i++;
			}
			if (s[0][i] == '\0' && s[1][i] == '\0')
				printf("%s,%s 같음", s[0], s[1]);
			else 
				printf("%s,%s 다름", s[0], s[1]);

	} while (1);
		
}
int main(void)
{
	is_same_str();
}