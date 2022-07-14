#include <stdio.h> 
int main () 
{ 
	int vet[]= {2,3,5,7}, i;
	
	for (i=0; i<4; i++)
	{
		vet[i] = vet[i] * 2;
	}
	for (i=0; i<4; i++)
	    printf("vet[%d] = %d\n", i, vet[i]);	
	
}
		
	
	
