#include <stdio.h>
#include <stdlib.h>

int main (){
    int ano;


    printf ("digite o ano");
    scanf ("%i", &ano);

    if (ano%4==0){
        printf ("bissexto");
    }
    else {
        printf ("nao eh bissexto");
    }

    return (0);

}
