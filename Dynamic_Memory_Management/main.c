#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#pragma(1)

/*void * malloc(size_t size)*/

int main()
{
	int *ptr = (int *)malloc(9000000);
	if (ptr == NULL)
	{
		printf("Bellek Yetersiz");
		exit(EXIT_FAILURE);
	}
	printf("%d\n",*ptr);
	*ptr = 20;
	*(ptr + 1) = 30;
	ptr[2] = 40;
	printf("%d %d %d \n",*ptr, *(ptr + 1), *(ptr + 2));
	printf("Basarili");
}