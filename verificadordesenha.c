#include <stdio.h>
#include <stdlib.h>

int main (){
    int senha = 1234;
    int senhaUsuario;

    printf ("digite a senha");
    scanf ("%i",&senhaUsuario);

    if (senha == senhaUsuario){
        printf ("senha Correta");

    }
    else {
         printf  ("senha incorreta");
    }

    return (0);


}
