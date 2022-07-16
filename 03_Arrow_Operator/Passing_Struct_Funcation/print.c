#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#pragma(1)
#include<String.h>

#include"print.h"

void func_print(Studendt a)
{
	printf("m_name %s\n", a.m_name);
	printf("m_surname %s\n", a.m_surname);
	printf("m_name %d\n", a.m_mathexam[0]);
	printf("m_name %d\n", a.m_student_no);
}


void func_print_pointer(Studendt* a)
{
	printf("m_name %s\n", a->m_name);
	printf("m_surname %s\n", a->m_surname);
	printf("m_name %d\n", a->m_mathexam[0]);
	printf("m_name %d\n", a->m_student_no);
	strcpy(a->m_name, "Mehmet"); //  isim değiştirildi
}