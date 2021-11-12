#include<stdio.h>
int main(void)
{    
	char s;

	printf("학번을 입력하시오:20171722 이장범\n");
	printf("1개의 문자를 입력하시오:");
	scanf_s("%c", &s);
	
	printf("입력한 문자:%c ", s);
	if (65 <= s && s <= 90) {
		printf("변환된 문자:%c" ,(s + 1));
	}
	else if (97 <= s && s <= 122) {
		printf("변환된 문자:%c", (s + 1));
	}
}