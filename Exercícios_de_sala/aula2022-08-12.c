#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
int main ()
{
    char vet[10]= {'M','A','T','H','E','U','S','\0'};
    int pos = 0;
        while (vet[pos] != '\0') { 
            printf("%c", vet [pos++]);
            printf("\n");
        }
}        
                    
        
