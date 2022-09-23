#include <stdio.h>
#include <stdlib.h>

//  Birden fazla parametre ile atilmaktadir
int sayitoplap(int *pa,int *pb,int *sonuc,int *carpimsonuc);
int main() {
	
    int sayi1=120;
	int sayi2=100;
	int sonuc=0;	
    int carpimsonuc=0;
	

	printf("sayi1 = %d  sayi2=%d  sonuc = %d \n",sayi1,sayi2,sonuc);
	
	sayitoplap(&sayi1,&sayi2,&sonuc,&carpimsonuc);
	
	printf("sayi1 = %d  sayi2=%d  toplamsonuc = %d  carpimsonuc = %d\n",sayi1,sayi2,sonuc, carpimsonuc);

	
	return 0;
}

int sayitoplap(int *pa,int *pb,int *psonuc,int *pcarpim)
{
	*psonuc = (*pa)+ (*pb);
    *pcarpim = (*pa) * (*pb);

}


