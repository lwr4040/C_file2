#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
	int i;
	int a = 0, b = 0;
	char c = ' ';
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
		if (i == 1) {
			a = atoi(argv[i]);
			printf("첫번째 인수 %d\n", a);
		}
		if (i == 3) {
			b = atoi(argv[i]);
			printf("두번째 인수 %d\n", b);
		}
		
		if (strcmp(argv[i],"+")==0) {
			c= '+';
		}
		if (strcmp(argv[i], "*") == 0) {
			c = '*';
		}
		if (strcmp(argv[i], "-") == 0) {
			c = '-';
		}
	}
	printf("\n\n");
	if (c == '+') {
		printf("%d", a + b);
	}
	if (c == '*') {
		printf("%d", a * b);
	}
	if (c == '-') {
		printf("%d", a - b);
	}
}
