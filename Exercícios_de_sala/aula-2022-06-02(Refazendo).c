#include <stdio.h>
int main () {

float seg, ter, quar, quin, sex, desp1, desp2, desp3, desp4, desp5, saida, entrada, caixa;
printf("Informe o valor de entrada da segunda-feira:\n");
scanf("%f", &seg);
printf("Informe o valor de despesas da segunda-feira:\n");
scanf("%f", &desp1);
printf("Informe o valor de entrada da terça-feira:\n");
scanf("%f", &ter);
printf("Informe o valor de despesas da terça-feira:\n");
scanf("%f", &desp2);
printf("Informe o valor de entrada da quarta-feira:\n");
scanf("%f", &quar);
printf("Informe o valor de despesas da quarta-feira:\n");
scanf("%f", &desp3);
printf("Informe o valor de entrada da quinta-feira:\n");
scanf("%f", &quin);
printf("Informe o valor de despesas da quinta-feira:\n");
scanf("%f", &desp4);
printf("Informe o valor de entrada da sexta-feira:\n");
scanf("%f", &sex);
printf("Informe o valor de despesas da sexta-feira:\n");
scanf("%f", &desp5);

saida = desp1+desp2+desp3+desp4+desp5;
printf("Valor de saída da semana:\n");

entrada = seg+ter+quar+quin+sex;
printf("Valor de entrada da semana:\n");

caixa = entrada - saída;
printf("O saldo da semana é:\n");

if (caixa >=2000) 
printf("Seu saldo é positivo!");

else if (caixa <=2000 && caixa >= -500)
printf("Seu saldo está ok.");

else (caixa <= -500)
printf("Seu saldo é negativo!");

}







