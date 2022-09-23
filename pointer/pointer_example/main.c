#include <stdio.h>
#include <stdlib.h>


int sayitoplaP(int *sayi1,int *sayi2 );
int main() {
	
	int sayi1 = 20;
	int sayi2 = 30;
	
	int sonuc =0;
	
	sonuc=sayitoplaP(&sayi1,&sayi2);
	
	printf("sayi1 = %d-sayi2 = %d - sonuc = %d",sayi1,sayi2,sonuc);
	
	
	
	
	return 0;
}


int sayitoplaP(int *sayi1,int *sayi2)
{
	int sonuc = (*sayi1) + (*sayi2);
	*sayi1 = 0;
	*sayi2 = 0;
	return sonuc; 
}






