#include<stdio.h>
int main(void)
{    
	char s;

	printf("�й��� �Է��Ͻÿ�:20171722 �����\n");
	printf("1���� ���ڸ� �Է��Ͻÿ�:");
	scanf_s("%c", &s);
	
	printf("�Է��� ����:%c ", s);
	if (65 <= s && s <= 90) {
		printf("��ȯ�� ����:%c" ,(s + 1));
	}
	else if (97 <= s && s <= 122) {
		printf("��ȯ�� ����:%c", (s + 1));
	}
}