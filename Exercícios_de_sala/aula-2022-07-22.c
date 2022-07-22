//exercício 1:
#include <stdio.h> 
  typedef struct {
     char nome[20];
     int idade;
     }pessoa; 
int main () 
{ 

    pessoa var1;
     printf("Digite seu nome:");
     scanf("%s", var1.nome);
     printf("Digite sua idade:");
     scanf("%d", &var1.idade);
     printf("Seu nome é: %s\n Sua idade é: %d\n", var1.nome, var1.idade);
}

// exercício 2:
#include <stdio.h> 
typedef struct { 
   char nome[20];
   int idade;
   float nota;
   }tipo_aluno;
int main () { 
   tipo_aluno aluno;
   scanf("%s %d %f", aluno.nome, &aluno.idade, &aluno.nota);
   printf("Seu nome é: %s\n Sua idade é: %d anos\n Sua nota é: %.2f\n", aluno.nome, aluno.idade, aluno.nota);
   }



     
     
         
     
     
   
   
   
    
     
