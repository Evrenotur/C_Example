#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#pragma(1)

/*void *calloc(size_t nintems ,size */

int main()
{
	size_t size;
	printf("Kaç Elemanli Bir Dizi");
	scanf("%d", &size);

	int *ptr=calloc(size,sizeof(int));

	if (!ptr)
	{
		printf("Bellek Yetersiz");
		return 0;
	}
}