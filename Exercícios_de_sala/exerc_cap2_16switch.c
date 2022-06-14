#include <stdio.h>
int main () { 

  int idade;
printf("Insira sua idade:\n");
scanf("%d", &idade);

  switch (idade)
  { 
  case 5:
  case 6:
  case 7:
printf("Você é Infantil A!");
  break;
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
printf("Entrada inválida!");
  break;  

  case 8:
  case 9:
  case 10:
printf("Você é Infantil B!");
  break;
  case 11:
  case 12:
  case 13:
printf("Você é Juvenil A!");
  break;
  case 14:
  case 15:
  case 16:
  case 17:
printf("Você é Juvenil B!");
  break;
  
  default:
printf("Você é Sênior!");
  }
}
  


