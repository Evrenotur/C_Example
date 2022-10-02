#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*Function Pointer
Fonskiyonların da adresi bulunmaktadır.
*/

void func1(int a, double b)
{

}
void func2(int a, double b)
{

}




int main()
{
	void(*fptr)(int, double)=&func1;
	

	printf("%p \n", fptr);
	printf("%p \n", func1);
	fptr = func2;
	printf("%p \n", fptr);
	printf("%p \n", func2);
	printf("\n");
	return 0;
}