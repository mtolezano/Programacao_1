#include <stdio.h>
int main () { 
  int x, f1=1, f2=1, f1f2;
printf("%d \n", f1);
printf("%d \n", f2);
  for (x=2; x<20; x++) { 
     f1f2 = f2;
     f2 = f1 + f2;
printf("%d \n", f2);
    f1 = f1f2;
} } 	