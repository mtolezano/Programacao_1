#include <stdio.h>
int main () { 

  int n1, n2, n3;
printf("Insira o primeiro número:\n");
scanf("%d", &n1);
printf("Insira o segundo número:\n");
scanf("%d", &n2);
printf("Insira o terceiro número:\n");
scanf("%d", &n3);

  if ( n1 > n2 && n1 > n3) {
	  printf("O maior número é:%d", n1);
  }
  else if ( n2 > n1 && n2 > n3) { 
      printf("O maior número é: %d", n2);
  }
  else { 
      printf("O maior número é: %d", n3);
} 
}   
