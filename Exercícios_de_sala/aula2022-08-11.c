//exercício 1:
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
    void esc_num (int num){ 
        printf("Número: %d\n", num);
        if (num > 0)
            esc_num (num - 1);
            }
int main ()
{ 
    esc_num(10);
}

//exercício 2:
