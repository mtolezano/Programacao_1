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
//exercício 3:
#include <stdio.h> 
typedef struct { 
   char nome[20];
   int idade;
   float nota;
   }tipo_aluno;
int main () { 
   tipo_aluno aluno[3];
   scanf("%s %d %f", aluno[0].nome, &aluno[1].idade, &aluno[2].nota);
   printf("Seu nome é: %s\n Sua idade é: %d anos\n Sua nota é: %.2f\n", aluno[0].nome, aluno[1].idade, aluno[2].nota);
}

//exercício 4:
#include <stdio.h> 
typedef struct { 
   char nome[20];
   int idade;
   float nota;
   }tipo_aluno;
int main () { 
   tipo_aluno aluno[3];
   scanf("%s %d %f", aluno[0].nome, &aluno[0].idade, &aluno[0].nota);
   printf("Seu nome é: %s\n Sua idade é: %d anos\n Sua nota é: %.2f\n", aluno[0].nome, aluno[0].idade, aluno[0].nota);
   
   scanf("%s %d %f", aluno[1].nome, &aluno[1].idade, &aluno[1].nota);
   printf("Seu nome é: %s\n Sua idade é: %d anos\n Sua nota é: %.2f\n", aluno[1].nome, aluno[1].idade, aluno[1].nota);
   
   
   scanf("%s %d %f", aluno[2].nome, &aluno[2].idade, &aluno[2].nota);
   printf("Seu nome é: %s\n Sua idade é: %d anos\n Sua nota é: %.2f\n", aluno[2].nome, aluno[2].idade, aluno[2].nota);
   
  
   }   
//exercício 5:
#include <stdio.h> 
typedef struct { 
   char nome[20];
   int idade;
   float nota;
   }tipo_aluno;
int main () { 
  int i;
   tipo_aluno aluno[3];
   /*
   scanf("%s %d %f", aluno[0].nome, &aluno[0].idade, &aluno[0].nota);
   printf("Seu nome é: %s\n Sua idade é: %d anos\n Sua nota é: %.2f\n", aluno[0].nome, aluno[0].idade, aluno[0].nota);
   
   scanf("%s %d %f", aluno[1].nome, &aluno[1].idade, &aluno[1].nota);
   printf("Seu nome é: %s\n Sua idade é: %d anos\n Sua nota é: %.2f\n", aluno[1].nome, aluno[1].idade, aluno[1].nota);
   
   
   scanf("%s %d %f", aluno[2].nome, &aluno[2].idade, &aluno[2].nota);
   printf("Seu nome é: %s\n Sua idade é: %d anos\n Sua nota é: %.2f\n", aluno[2].nome, aluno[2].idade, aluno[2].nota);*/
   
   for (i=0; i<3; i++) {
	   printf("Nome:");
	   scanf("%s", aluno[i].nome);
	   printf("Idade:");
	   scanf("%d", &aluno[i].idade);
	   printf("Nota:");
	   scanf("%f", &aluno[i].nota);
	   printf("\n");
   }
   
   printf("  ------ Dados dos alunos ------\n");
   
   for (i=0; i<3; i++) {
	   printf("           Nome: %s\n",aluno[i].nome);
	   printf("\n");
	   printf("           Idade: %d\n",aluno[i].idade);
	   printf("\n");
	   printf("           Nota: %.2f\n",aluno[i].nota);
   }
   
   
  
   }   



     
     
         
     
     
   
   
   
    
     
