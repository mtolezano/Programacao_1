#include <stdio.h> 
int main () { 
	int num, flag, i;
	printf("Escreva um número:");
	scanf("%d", &num);
	flag = 0;
	for (i=2; i<num-1 ; i++) { 
		if (num % i == 0) 
			flag = 1;
	}
	if (num == 1) 	    printf("%d NÃO é primo\n", num);	
	else if (flag == 0) printf("%d é primo\n", num);
	else 	            printf("%d NÃO é primo\n", num);
}			
