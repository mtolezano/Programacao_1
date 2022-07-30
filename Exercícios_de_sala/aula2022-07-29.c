
//exercício 1:
#include <stdio.h>
void teste (int *num) {
    printf("f:%p\n", num); 
    *num = 10;
                     }
int main ()
{
    int num = 7;
    printf("%p\n", &num);
    teste (&num);
    printf("%d\n", num);
}        

//exercício 2:
/**
 * @author: Jacson Rodrigues Correia da Silva <jacsonrcsilva@gmail.com>
 */
#ifndef _PONTEIROS_H
#define _PONTEIROS_H

#include <stdlib.h>
#include <stdio.h>

#ifdef __linux__
    #define AZUL     "\033[34m"
    #define VERDE    "\033[32m"
    #define VERMELHA "\033[31m"
    #define MARROM   "\033[33m"
    #define NORMAL   "\033[0m"
#else
    #define AZUL     ""
    #define VERDE    ""
    #define VERMELHA ""
    #define MARROM   ""
    #define NORMAL   ""
#endif

#define IMP(X)      printf(X ": ");
#define IMP_END(N,X)  printf(AZUL "[&%s: %p]  " NORMAL,N,&X);
#define IMP_INT(N,X)  printf(VERDE "%s: %d  " NORMAL,N,X);
#define IMP_PONT(N,X) printf(MARROM "%s: %p " NORMAL "->",N,X); \
if (X==&d1 || X==&d2 || X==&d3 || X==&d4) {printf(" *");IMP_INT(N,*X)} \
else printf(VERMELHA " Falha de segmentação" NORMAL);
#define ENTER       printf("\n");

#define LIMPA_TELA  printf("\033[1J\033[0;0H");


#endif

//exercício 3:
/**
 * @author: Jacson Rodrigues Correia da Silva <jacsonrcsilva@gmail.com>
 */
#ifndef _PONTEIROS_H
#define _PONTEIROS_H

#include <stdlib.h>
#include <stdio.h>

#ifdef __linux__
    #define AZUL     "\033[34m"
    #define VERDE    "\033[32m"
    #define VERMELHA "\033[31m"
    #define MARROM   "\033[33m"
    #define NORMAL   "\033[0m"
#else
    #define AZUL     ""
    #define VERDE    ""
    #define VERMELHA ""
    #define MARROM   ""
    #define NORMAL   ""
#endif

#define IMP(X)      printf(X ": ");
#define IMP_END(N,X)  printf(AZUL "[&%s: %p]  " NORMAL,N,&X);
#define IMP_INT(N,X)  printf(VERDE "%s: %d  " NORMAL,N,X);
#define IMP_PONT(N,X) printf(MARROM "%s: %p " NORMAL "->",N,X); \
if (X==&d1 || X==&d2 || X==&d3 || X==&d4) {printf(" *");IMP_INT(N,*X)} \
else printf(VERMELHA " Falha de segmentação" NORMAL);
#define ENTER       printf("\n");

#define LIMPA_TELA  printf("\033[1J\033[0;0H");


#endif

//exercício 4:
#include <stdio.h>
#include <stdlib.h>
   int main () { 
       int *idade;
       idade = malloc (sizeof(int));
       printf("Insira sua idade:");
       scanf("%d", idade);
       printf("end.:%p\n", idade);
       printf("Valor.: %d\n", *idade);
       }      

//exercício 5:
