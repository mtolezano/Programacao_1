#include <stdio.h> 
int main() {

float imc, massa, altura;

printf("Informe o seu peso:");
scanf("%f", &massa);
printf("Informe sua altura:");
scanf("%f", &altura);
imc = massa/(altura*altura);

if (imc < 18.5) {
printf("Você é magro!\n");
}
else if (imc < 25.) {
printf("Você é normal!\n");
}
else if (imc < 30) {
printf("Você está com sobrepeso!\n");
}
else 
printf("Você é obeso!"); 
printf("IMC: %f \n", imc);

}
