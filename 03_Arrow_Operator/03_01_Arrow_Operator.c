
#include<stdio.h>


/* Arrow Giriþ*/
typedef struct Student
{
	char mname[20];
	char mlast_name[20];
	int mmath;
	int msoftware;
}Studendt;

int main()
{
	
	Studendt s1;

	Studendt* ps = &s1;

	ps->mmath = 75;

	printf("math=%d", ps->mmath);


}
