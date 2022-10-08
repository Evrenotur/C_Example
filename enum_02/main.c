#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#pragma(1)
/*Beginner,Elemantary,PreIntermediate,Intermediate,UpperIntermediate
Advanced
*/

typedef enum LevelNumber
{
	Beginner, Elemantary, PreIntermediate, Intermediate, UpperIntermediate,Advaced
}n1;

int main()
{
	n1 level;
	level = Beginner;
	switch (level)
	{
	case Beginner:
		Printf("Seviyeniz:Beginner ve %d kur Almanız gerek",Advaced-Beginner+1);
		break;
	case Elemantary :
		Printf("Seviyeniz:Elemantary ve %d kur Almanız gerek", Advaced - Elemantary + 1);
		break;
	case PreIntermediate :
		Printf("Seviyeniz:PreIntermediate ve %d kur Almanız gerek", Advaced - PreIntermediate + 1);
		break;
	case Intermediate :
		Printf("Seviyeniz:Intermediate ve %d kur Almanız gerek", Advaced - Intermediate + 1);
		break;
	}
}