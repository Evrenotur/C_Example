#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#pragma(1)
                /* initialize the struct object */

struct Student
{
	char mname[20];
	char mlast_name[20];
	int mmath;
	int msoftware;
}s1 = {"Evren","Otur",100,50}, s2= { "Evren","Otur"};

int main()
{
	printf("s1.mname : %s \n",s1.mname);
	printf("s2. mlast_name : %s \n", s1.mlast_name);
	printf("s1.mmath : %d \n", s1.mmath);
	printf("s1.msoftware : %d \n", s1.msoftware);

	printf("-------------------------------------------------- \n");

	printf("s2.mname : %s \n", s2.mname);
	printf("s2. mlast_name : %s \n", s2.mlast_name);
	printf("s2.mmath : %d \n", s2.mmath);
	printf("s2.msoftware : %d \n", s2.msoftware);

}
