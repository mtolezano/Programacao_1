#include <stdio.h> 
int main () { 

int n1;
printf("Informe o número:\n");
scanf("%d", &n1);

if ((n1 % 3) == 0 && (n1 % 7) == 0)
  printf("Este número é divisível por 3 e por 7!");
else
  printf("Este número não é divisível por 3 ou 7");
  
  }