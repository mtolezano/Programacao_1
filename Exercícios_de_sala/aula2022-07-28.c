//exercício 1:
#include <stdio.h>
  float soma (float n1, float n2){
      float resultado;
      resultado = n1+n2;
      return resultado;
      }
  int main () { 
      float n1, n2;
      n1 = 12.5;
      n2 = 10.0;
      soma (10,10);
      printf("A soma é: %.2f\n", soma(10,10));
}

//exercício 2:
#include <stdio.h>
  float soma (float n1, float n2){
      float resultado;
      resultado = n1+n2;
      return resultado;
      }
  int main () { 
      float n1, n2;
      n1 = 12.5;
      n2 = 10.0;
      soma (10,10);
      printf("A soma é: %.2f\n", soma(n1,n2));
}

//exercício 3:
#include <stdio.h>
  void fibonacci (int n){
      int n1=1, n2=2, p, i;
      if (n < 1) return;
          printf("%d ", n1);
      for (i=0; i < n-1; i++){
          printf("%d ", n2);
          p=n1 + n2;
          n1=n2;
          n2=p;
          }
     printf("\n");
}          
    
int main () { 
    int num;
    printf("Insira a quantidade de elementos:");
    scanf("%d", &num);
    fibonacci (num);
    
    
         
}

//exercício 4:
#include <stdio.h>
  int fatorial (int n){
      int i, produto = 1;
      if (n == 0) 
         return 1; 
      else if (n < 0)
         return -1;           
      for (i = n; i > 0 ; i--)
      {         
          produto = produto * i;     
      }
      return produto;

}          
    
int main () { 
    int num;
    printf("Insira o número:");
    scanf("%d", &num);
    printf("Seu fatorial é: %d\n", fatorial(num));
}


    
    
    
             
             
             
