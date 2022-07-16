
#include<stdio.h>


/* ilk Deðer Atama*/
struct Student
{
	char mname[20];
	char mlast_name[20];
	int mmath;
	int msoftware;
};

int main()
{
	struct Student s1 = { .mname = "Evren",.mlast_name = "Otur" };

	printf("name %s  --  mlast_name %s", s1.mname,s1.mlast_name);
}
