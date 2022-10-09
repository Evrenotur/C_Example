#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#pragma(1)

/*void free(void *ptr)*/

int main()
{ 
	size_t size;
	//int dizi[size];
	printf("Dizi Boyutu Girin");
	scanf("%d",&size);
  int *ptr =malloc(sizeof(int) * size);
  if (!ptr)
  {
	  printf("Bellek Alanı Başarısız");
	  exit(EXIT_FAILURE);
  }
  for (int i = 0; i < size; i++)
  {
	  ptr[i] = i;
  }
  for (int i = 0; i < size; i++)
  {
	  printf("dizi %d ", ptr[i]);
  }
  free(ptr);
}