#include<stdio.h>
#define PI 3.141592
int main(void)
{
	/*int s;
	printf("���� �Է�:");
	scanf_s("%d", &s);
		
	printf("8����: %#o, 10���� :%d, 16����: %#x\n", s,s,s);
	*/
	char s2;
	printf("���� �Է�:");
	scanf_s("%c", &s2);

	printf("8����: %#o, 10���� :%d, 16����: %#x", s2, s2, s2);

	double radius;
	printf("�� ������ �Է�:");
	scanf_s("%d",&radius);
	printf("�� ������ :%.2lf, �� ����:%.2lf, �� �ѷ�:%.2lf",radius,(radius*radius)*PI,2*radius*PI);
	
	
}