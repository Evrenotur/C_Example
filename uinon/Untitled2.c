




#include<stdio.h>
#pragma
#include <stdlib.h>
/*Unionun bellekteki de�erini en b�y�k birimdeki de�i�keni belirler*/
typedef union union_ports {
	int pots;
	int timeport;   // 4 byte
	int adcport[5];// 20 byte

}Ports,*Uptr;

//typedef union union_ports ports;

int main() {
	
	Ports p;

	Uptr ptr = &p;
	ptr->adcport[0] = 100;
	printf("%d\n", ptr->adcport[0]);
	printf("%zu\n", sizeof(p));
}

