#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*Generic Pointer  (void)
Türden bağımsız olarak bir nesnenin adresini gösterebilen pointerlara denir.
*/
int main()
{
	int x = 20;
	int y = 30;
	char c;

	void* ptr = &x;

	printf("%d", *(int*)ptr);

	return 0;
}