#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#pragma(1)
#include<String.h>
#include"print.h"


int main()
{
	
	Studendt s2 = { "evren","otur",{100,50,90},189 };
	func_print_pointer(&s2);
	//func_print(s1);


	printf("m_name %s", s2.m_name);

}