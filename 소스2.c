#include<stdio.h>

int main(void)
{
	printf("�й� : 20171722, �̸�: �����\n");

	double mid;
	double last;
	printf("�߰���� ������ �Է��Ͻÿ�:");
	scanf_s("%lf", &mid);
	printf("�⸻��� ������ �Է��Ͻÿ�:");
	scanf_s("%lf", &last);

	double sum =	mid + last;
	double average = (mid + last) / 2;
	printf("����� ������ ���� %10.3lf �Դϴ�", sum);
	printf("����� ���� ����� %10.3lf�Դϴ�",average);
}