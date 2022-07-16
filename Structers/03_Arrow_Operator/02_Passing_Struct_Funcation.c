#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#pragma(1)
#include<String.h>

typedef struct data {
	int x, y;

}Data;

Data foo(Data s)
{
	return s;
}

int main()
{
	Data data1 = {10,20};
	Data data2 = foo(data1);
	

	printf("x=%d---y=%d", data2.x, data2.y);



}