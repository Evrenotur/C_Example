#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
* pointer  to pointer 
* pointerın kendi adresini tutmamız gereken işlemlerde kullanılmaktadır.
*/
int main()
{
	int x = 40;
	int y = 300;
	int* ptr = &x;      // x in adresi
	int** p = &ptr;  //  p ise pointer to pointer to int
	*p = &y;
	*ptr = 200;

	printf("y =%d\n", y);
	
	return 0;
}