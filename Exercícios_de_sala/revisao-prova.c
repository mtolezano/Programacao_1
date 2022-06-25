#include <stdio.h>
int main () 
{ 
/*Variáveis: a, b, c, d;
	Início: Ler as respectivas variáveis
Se a == b + c + d && d == b + c && b == c
Escreva: Está equilibrado.
Se não
Escreva: Não está equilibrado. */
	int a, b, c, d;
	printf("Insira o valor para A:\n");
	scanf("%d", &a);
	printf("insira o valor para B:\n");
	scanf("%d", &b);
	printf("Insira o valor para C:\n");
	scanf("%d", &c);
	printf("Insira o valor para D:\n");
	scanf("%d", &d);
			
	if (a == b + c + d && d == b + c && b == c) {
	printf("Está equilibrado.\n");
	} else 
	printf("Não está equilibrado.\n");
	
}	
	
	
	
