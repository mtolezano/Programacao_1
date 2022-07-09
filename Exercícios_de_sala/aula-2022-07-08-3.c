#include <stdio.h>
int main () { 
	int vet[20], i;
	
	for (i=0; i < 20; i++) { 
		vet [i] = 2 * i;
	} 
	for (i=0; i < 20; i++) {
		printf("%d\n", vet[i]);
	}
}	
