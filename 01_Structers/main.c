#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#pragma(1)
                /*Dot And Arrow OPERATORS (. and ->) */

struct ComplexNumber
{
	double x;
	double y;
}n1,n2;

int main()
{
	/*
	* n1.x=n2.x;
	* n1.y=n2.y;
	*/
	n1.x = 10;
	n1.y = 5;
	n2 = n1;
	printf("n1.x = %f-- y= %f", n1.x,n2.y);
}
