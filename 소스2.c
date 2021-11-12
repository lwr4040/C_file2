#include<stdio.h>

int main(void)
{
	printf("학번 : 20171722, 이름: 이장범\n");

	double mid;
	double last;
	printf("중간고사 성적을 입력하시오:");
	scanf_s("%lf", &mid);
	printf("기말고사 성적을 입력하시오:");
	scanf_s("%lf", &last);

	double sum =	mid + last;
	double average = (mid + last) / 2;
	printf("당신의 성적의 합은 %10.3lf 입니다", sum);
	printf("당신의 성적 평균은 %10.3lf입니다",average);
}