//exercício 1:
#include <stdio.h> 
#include <stdlib.h> 
   int main () { 
      int *p; 
      printf("Estou apontando para: %p\n", p);
      *p = 10;
      }
      

//exercício 2:
#include <stdio.h> 
#include <stdlib.h> 
   int main () { 
      int *p; 
      printf("Estou apontando para: %p\n", p);
      //printf("Tamanho de um inteiro: %ld\n", sizeof(int));
      p = malloc (sizeof(int));
      printf("Estou apontando para: %p\n", p);
      *p = 10;
      printf("Valor de *p: %d", *p);
      }
      
//exercício 3:
#include <stdio.h> 
#include <stdlib.h> 
   int main () { 
      int *p; 
      printf("Estou apontando para: %p\n", p);
      //printf("Tamanho de um inteiro: %ld\n", sizeof(int));
      p = malloc (sizeof(int));
      printf("Estou apontando para: %p\n", p);
      scanf("%d", p);
      printf("Valor de *p: %d\n", *p);
      }
      
//exercício 4:
#include <stdio.h> 
#include <stdlib.h> 
   int main () { 
      int *n1, *n2, *soma; 
      
      n1 = malloc (sizeof(int));
      printf("Estou apontando para: %p\n", n1);
      scanf("%d", n1);
      
      n2 = malloc (sizeof(int));
      printf("Estou apontando para: %p\n", n2);
      scanf("%d", n2);
      
      soma = malloc (sizeof(int));
      *soma = *n1 + *n2;
      printf("A soma é: %d", *soma);
      
      }
//exercício 5:
#include <stdio.h> 
#include <stdlib.h> 
   int main () { 
      int vet[3], i, soma = 0;
      for (i=0; i < 3; i++) {
          printf("Digite valor:");
          scanf("%d", &vet[i]);
      }
      for (i=0; i < 3; i++) { 
          soma = soma + vet[i];
      } 
        printf("Média: %d\n", soma/3);
        }
//exercício 6:
#include <stdio.h> 
#include <stdlib.h> 
   int main () { 
      int *vet, i, soma = 0;
      vet = malloc (3*sizeof(int));
      for (i=0; i < 3; i++) {
          printf("Digite valor:");
          scanf("%d", &vet[i]);
      }
      for (i=0; i < 3; i++) { 
          soma = soma + vet[i];
      } 
        printf("Média: %d\n", soma/3);
        }
//exercício 7:
#include <stdio.h> 
#include <stdlib.h> 
   int main () { 
      int *vet, i, *soma;
      soma = malloc(sizeof(int));
      vet = malloc (3*sizeof(int));
      *soma = 0;
      for (i=0; i < 3; i++) {
          printf("Digite valor:");
          scanf("%d", &vet[i]);
      }
      for (i=0; i < 3; i++) { 
          *soma = *soma + vet[i];
      } 
        printf("Média: %d\n", *soma/3);
        }
//exercício 8:
#include <stdio.h> 
#include <stdlib.h> 
   int main () { 
      int *vet, *i, *soma;
      soma = malloc(sizeof(int));
      vet = malloc (3*sizeof(int));
      i = malloc (sizeof(int));
      *soma = 0;
      for (*i=0; *i < 3; (*i)++) {
          printf("Digite valor:");
          scanf("%d", &vet[*i]);
      }
      for (*i=0; *i < 3; (*i)++) { 
          *soma = *soma + vet[*i];
      } 
        printf("Média: %d\n", *soma/3);
        }
//exercício 9:
#include <stdio.h> 
#include <stdlib.h> 
    float media_notas (int n){ 
        float *notas, media;
        int i; 
        notas = malloc (n*sizeof(float));
        for (i =0; i < n; i++) { 
        printf("Aluno %d:", i);
        scanf("%f", &notas[i]);
        }
        media =1.0;
        for (i=0; i < n; i++) {
           media += notas[i];
           }
           media = media/n;
           return media;
           }
   int main () { 
      float m;
      m = media_notas(3);
      printf("Média: %.2f\n", m);
      }
      
      
      
       
      
       
 
      
      
      
       
      
       
 
      
      
       
      
       
 
      
      
       
      
    
      
      
       
      

