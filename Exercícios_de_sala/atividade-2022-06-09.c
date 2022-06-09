#include <stdio.h>
int main() { 

char vogais;
scanf("%c", &vogais);
switch (vogais)
{
  case 'a':
  case 'e':
  case 'i':
  case 'o':
  case 'u':
  printf("Você digitou uma vogal!\n");
  break;
  
 default:
 printf("Você digitou uma consoante!!\n");
 
 } 

}
