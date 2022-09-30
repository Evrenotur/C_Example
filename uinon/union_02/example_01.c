
#define _CRT_SECURE_NO_WARNINGS
#pragma
#include<stdio.h>

typedef union port {
	int x, y;
    double dval;
    int k;
	char str[6];
}Ports;

int main()
{    
	/*İlk öcenlikli değer atama ilk önce tanımlanan değişkene atanmaktadır*/
	Ports A = {5};
	printf("%d\n",A.x);
	printf("%d\n", A.y);
	printf("%lf\n", A.dval);
    printf("%s\n", A.str);


	return 0;
}