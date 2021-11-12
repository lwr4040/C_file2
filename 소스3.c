#include<stdio.h>
#define PI 3.141592
int main(void)
{
	/*int s;
	printf("정수 입력:");
	scanf_s("%d", &s);
		
	printf("8진수: %#o, 10진수 :%d, 16진수: %#x\n", s,s,s);
	*/
	char s2;
	printf("문자 입력:");
	scanf_s("%c", &s2);

	printf("8진수: %#o, 10진수 :%d, 16진수: %#x", s2, s2, s2);

	double radius;
	printf("원 반지름 입력:");
	scanf_s("%d",&radius);
	printf("원 반지름 :%.2lf, 원 면적:%.2lf, 원 둘레:%.2lf",radius,(radius*radius)*PI,2*radius*PI);
	
	
}