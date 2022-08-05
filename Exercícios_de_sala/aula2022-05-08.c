//exercício 1:
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

//exercício 2:
#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
typedef struct { 
    float peso, altura;
    } tipoIMC;
int main () { 
    tipoIMC *imc;
    imc = malloc (sizeof(tipoIMC));
    //scanf("%f", &imc -> peso);
    //printf("%f\n", imc -> peso);
    printf("Insira o peso.:");
    scanf("%f", &imc -> peso);
    
    printf("Insira sua altura.:");
    scanf("%f", &imc -> altura);
    
    printf("Seu peso é.: %.2f\nSua altura é.: %.2f\n", imc -> peso, imc -> altura);
    
    printf("Seu imc é.:%f\n", imc -> peso/ pow (imc -> altura, 2));
    
    }    
//exercício 3:
