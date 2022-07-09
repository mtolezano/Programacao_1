#include <stdio.h>
int main () { 
	float vet[100];
	int i;
	for (i=0; i < 100; i++) { 
		vet[i] = 2 * i + 1;
		} 
	for (i=0; i < 10; i++) { 
		printf("%.2f\n", vet[i]);
		}
}			
