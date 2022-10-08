#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#pragma(1)


typedef enum ComplexNumber
{
	North,South=20,East,West
}n1;

int main()
{
	n1 number=South;

	printf("%d", number);

}