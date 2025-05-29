#include<stdio.h>
#include<stdlib.h>

int main(){
    int contador = 1, numero;

    printf ("Digite um numero");
    scanf ("%i", &numero);


    while (contador < numero){
        printf ("%i, ", contador);
        contador += 2;

    }

  return 0;
}


