#include<stdio.h>
#include<stdlib.h>

int main() {
    int idade;

    printf ("Digite sua idade");
    scanf ("%i", &idade);

    if (idade  <= 12){
        printf("Crianca");
        }

    else if(idade >=13 && idade <=17){
        printf ("adolecente");

       }
    else if (idade >=18 &&idade <=59){
        printf ("adulto");

    }
    else {
        printf ("Idoso");
    }
    return 0;

}
