#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, aux;
    int f=1, aux2 = 1;
    int i=1; // variavel de controle

     printf ("Digite um numero");
     scanf ("%i", &n);
    //printf ("0\n1\n");
        for (i=1; i< n; i++){
            printf ("%i\n", f);
            f = aux + aux2;
            aux = aux2;
            aux2 = f;




        }


    return 0;



}
