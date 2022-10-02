
#define _CRT_SECURE_NO_WARNINGS
#pragma
#include<stdio.h>
#include<stdint.h>
void generic_print_array(const void* vp, size_t size, int type);
void generic_print_array_sizebyt(const void* vp, size_t size, size_t nbyte);
#define SIZE  6
int a = 20;
int* ptr = &a;

void* otrr = &a;
int main()
{
	int ia[SIZE] = { 4,3,7,5,0,1 };
	//double da[SIZE] = { 4.2,3.4,7.8,5.9,3.1,9.0 };
	//generic_print_array(ia, SIZE, 1);
	generic_print_array_sizebyt(ia, SIZE, sizeof(a));
	return 0;
}
void generic_print_array_sizebyt(const void* vp, size_t size, size_t nbyte)
{
char* p = (char*)vp;

	for (size_t i = 0; i < size; i++)
	{
		printf("%d ", p);
		p += nbyte;
	}





}
void generic_print_array(const void* vp, size_t size, int type)
{

	for (int i = 0; i < size; i++)
	{
		switch (type)
		{
		case 0:
			printf("%f", *((double*)vp + i));
			break;
		case 1:
			printf("%d  ", *((int*)vp + i));
			break;
		case 2:
			printf("%f", *(float*)vp + i);
			break;
		case 3:
			printf("%c", *((char*)vp + i));
			break;
		}
	}
}
