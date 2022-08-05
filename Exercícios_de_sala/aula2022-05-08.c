#include <stdio.h> 
#include <stdlib.h>
typedef struct { 
    float peso, altura;
    } tipoIMC;
int main () { 
    tipoIMC *imc;
    imc = malloc (sizeof(tipoIMC));
    scanf("%f", &imc -> peso);
    printf("%f\n", imc -> peso);
    
    }    
