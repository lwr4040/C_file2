#include <stdio.h>

int main(void)
{
	int number;
	scanf_s("%d", &number);
	// switch - case
	switch (number) {
	case 5:
		printf("number�� 5�����ϴ�.");
		break;
	case 6:
		printf("number�� 6�̾����ϴ�.");
		break;
	case 7:
	case 8:
		printf("7 Ȥ�� 8�Դϴ�.");
		break;
	}


}