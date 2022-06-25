#include <stdio.h>
int main ()
{
//Variáveis: N, M, vez = 0
//  Início: Ler valor de N e M
//  Escrever o 'total N' na tela
//  Enquanto N > 0:
// Se (vez==0):
//  	Escreve 'Paula -'
//  	vez <- 1
//  Senão 
//  	Escreve 'Carlos -'
//  	vez <- 0
//  FIM: Se
//  	(N = N - M)
//  Se (N<0)
//  	Imprime 0
//  Senão
//  	Imprime N
//  FIM: enquanto
//  Se vez ==0:
//  	Imprime 'Carlos ganhou'
//  Senão	
//  	Imprime 'Paula ganhou'
  
	int N, M, vez = 0;
		printf("Total de bolinhas:\n");
		scanf("%d", &N);
		printf("Quantidade que cada um vai comer:\n");
		scanf("%d", &M);
	
	while (N > 0) 
	{
	if (vez == 0) 
	{
		printf("Paula - ");
	   vez = 1;
	} else {
		printf("Carlos - ");
	   vez = 0;	
	       } 
	N = N - M;
	
	if (N < 0) 
	{ 
		printf("0\n");
	} else { 
		printf("%d\n", N);
		}
	}
	
	if (vez == 0) 
	{
		printf("Carlos ganhou\n");
	} else { 
		printf("Paula ganhou\n");
		} 
}			
				       
	       	  	
	
