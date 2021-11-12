#include <stdio.h>

int main(void)
{
	int number;
	scanf_s("%d", &number);
	// switch - case
	switch (number) {
	case 5:
		printf("number는 5였습니다.");
		break;
	case 6:
		printf("number는 6이었습니다.");
		break;
	case 7:
	case 8:
		printf("7 혹은 8입니다.");
		break;
	}


}