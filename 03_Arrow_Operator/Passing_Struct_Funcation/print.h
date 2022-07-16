#pragma once
typedef struct Student
{
	char m_name[20];
	char m_surname[20];
	int m_mathexam[3];
	int m_student_no;
}Studendt;


void func_print(Studendt a);


void func_print_pointer(Studendt* a);