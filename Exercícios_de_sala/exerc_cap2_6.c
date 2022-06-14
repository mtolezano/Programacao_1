#include <stdio.h> 
int main () 
{ 

  int salario, prestacao;

printf("Informe o salário:");
scanf("%d", &salario);
printf("Informe o valor da prestação:");
scanf("%d", &prestacao);

  if (prestacao <= (salario * 0.3))
	printf("Empréstimo concedido.");
  else
	printf("Empréstimo não concedido.");

}

