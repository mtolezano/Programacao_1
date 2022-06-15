#include <stdio.h>
int main () { 

  int saldo;
  float c1, c2, c3;
printf("Digite o saldo:");
scanf("%d", &saldo);

c1 = saldo * 0.3;
c2 = saldo * 0.4;
c3 = saldo * 0.5;

  switch (saldo){
    case 0 ... 500:
printf("Nenhum crédito");
    break;
    case 501 ... 1000:
printf("Saldo médio: %d \n Crédito: %.f", saldo, c1);
    break;
    case 1001 ... 3000:
printf("Saldo médio: %d \n Crédito: %.f ", saldo, c2);
    break;
    default:
printf("Saldo médio: %d \n Crédito: %.f", saldo, c3);
} } 