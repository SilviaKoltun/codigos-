#include<stdio.h>
#include<stdlib.h>

int main(){
    int numero;

    printf ("Digite um Numero");
    scanf ("%i",&numero);

    if (numero >=10 && numero <=20){
        printf ("Numero dentro do Intervalo");
    }
    else {
        printf ("numero invalido");

    }

    return 0;

}
