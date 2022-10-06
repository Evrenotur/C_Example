#include <stdio.h>
#include <stdlib.h>
#include<stdint.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
uint32_t MAP(uint32_t au32_IN, uint32_t au32_INmin, uint32_t au32_INmax, uint32_t au32_OUTmin, uint32_t au32_OUTmax)
{
    return ((((au32_IN - au32_INmin)*(au32_OUTmax - au32_OUTmin))/(au32_INmax - au32_INmin)) + au32_OUTmin);
}
int main(int argc, char *argv[]) {
	
	
	
	int a=MAP(1023,0,1023,0,255);
	
	printf("Map %d ",a);
	
	
	
	return 0;
}
