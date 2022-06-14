#include <stdio.h>
int main () { 

char nome;
float p1, p2, media;

printf("Insira o seu nome:\n");
scanf("%s", &nome);
printf("Insira a nota da P1:\n");
scanf("%f", &p1);
printf("Insira a nota da P2:\n");
scanf("%f", &p2);

  if (media < 3){  
  media = (p1 + p2)/2;
printf("Reprovado!"); 
  
} else if (media >= 7){   
  media = (p1 + p2)/2;
printf("Aprovado!");
  
} else { 
printf("Prova final!");
}}
 
