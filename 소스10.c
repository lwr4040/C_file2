#include <stdio.h>

int main(void)
{
	int num[][5]=[9,8,7,6,5,4,3,2,1];
	int(*pn)[5];

	char strs[][10] = ["red", "green", "yellow"];
	char(*ps)[10];

	pn = num;
	ps = strs;

	printf("pn[0][0]=%d");




}