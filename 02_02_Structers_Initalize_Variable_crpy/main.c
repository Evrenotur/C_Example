
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#pragma(1)
/* initialize the struct object */
//typedef struct Student OGR;
struct Student
{
	char mname[20];
	char mlast_name[20];
	int mmath;
	int msoftware;
};


int main()

	 
	struct Student s1 = { "EVREN","OTUR",50,60 };
	printf("s1.mname : %s \n", s1.mname);
	printf("s2. mlast_name : %s \n", s1.mlast_name);
	printf("s1.mmath : %d \n", s1.mmath);
	printf("s1.msoftware : %d \n", s1.msoftware);

	printf("---------------------------------------------\n");




}