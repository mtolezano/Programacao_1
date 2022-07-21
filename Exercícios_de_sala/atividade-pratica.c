#include <stdio.h>
#include <stdlib.h>
int main () { 
	int mat[10][10], lin, col;
	   for (lin = 0; lin < 10; lin++) { 
	     for (col = 0; col < 10; col++) { 
	        mat[lin][col] = rand()%1000;
	        printf("%3d ", mat[lin][col]);
	      }
	   printf("\n");   
	    }
	 }   
	    
	    
	    
	      
	
