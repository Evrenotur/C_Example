
#include<stdio.h>


/* Structer Without Tag*/

typedef struct Student
{
	char m_name[20];
	char m_surname[20];
	int m_mathexam[3];
	int m_student_no;
}Studendt;


void func(Studendt a)
{
	printf("m_name %s\n", a.m_name);
	printf("m_surname %s\n", a.m_surname);
	printf("m_name %d\n", a.m_mathexam[0]);
	printf("m_name %d\n", a.m_student_no);
}
int main()
{
	
	Studendt s1 = { "evren","otur",{100,50,90},189 };

	func(s1);

	


}
