#include<stdio.h>
#include<stdlib.h>

int main(){

    int numero;
    int multiplicador;

    printf("Digite um numero: ");
    scanf("%i", &numero);
    printf ("A tabuada do numero %i eh:\n",numero);

    for (multiplicador = 1; multiplicador <=10; multiplicador++) {
        int resultado = numero * multiplicador;
        printf ("%i x %i = %i\n",numero, multiplicador, resultado);


    }


    return 0;
}
