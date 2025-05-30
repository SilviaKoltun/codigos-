#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int f;

     printf ("Digite um numero");
     scanf ("%i", &n);
          for (f = 1; n>1; n--){
            f = f * n;
          }
          printf ("\n%i", f);


  return 0;



}
