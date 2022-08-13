//exercício 1:
#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
int main ()
{
    char vet[10]= {'M','A','T','H','E','U','S','\0'};
    int pos = 0;
        while (vet[pos] != '\0') { 
            printf("%c", vet [pos++]);
            printf("\n");
        }
}

//exercício 2:
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> 
void imp (char vet[10], int pos) { 
    if (vet[pos] == '\0') { 
        printf("\n");
    } else { 
          printf("%c", vet[pos]);
          imp (vet, pos + 1);
      }
  }            
int main () 
{ 
    char vet[10];
    strcpy (vet, "Matheus");
    imp (vet, 0);
}

//exercício 3: (imprimir nome ao contrário):
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> 
void imp (char vet[10], int pos) { 
    if (vet[pos] == '\0') { 
        printf("\n");
    } else {           
          imp (vet, pos + 1);
          printf("%c", vet[pos]);
      }
  }            
int main () 
{ 
    char vet[10];
    strcpy (vet, "Matheus");
    imp (vet, 0);
}   
//exercício 4:  (Escrever em binário um número aleatório):
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
void binario ( int n) { 
    if (n / 2 == 0) { 
        printf("binário: %d", n % 2);
    } else {                                
          binario (n / 2);
          printf("%d", n % 2);
          
      }
  }            
int main () 
{ 
    int n;
    binario (500);
    printf("\n");
}    
//exercício 5: (fatorial):
#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int fat ( int n) { 
    if (n == 1) { 
        return 1;
    } else {                                
          return n*fat(n-1);
      }
  }            
int main () 
{ 
    int n;
    printf("%d\n", fat (5));
}    
    
    
        
    
    
        
    
    
    
                    
        
