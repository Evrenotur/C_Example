

#include<stdio.h>
#pragma
#include <stdlib.h>

typedef union union_ports {
	int pots;
	int timeport;
	int adcport;
}Ports,*Uptr;

//typedef union union_ports ports;

int main() {
	
	Ports p;

	Uptr ptr = &p;
	ptr->adcport = 100;
	printf("%d", ptr->adcport);
}

