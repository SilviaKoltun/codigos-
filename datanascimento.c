#include <stdio.h>
#include <stdlib.h>

int main (){
    int anoA = 2025; // ano atual
    int mesA = 5; // mes atual
    int diaA = 22; // dia atual
    int anoN; // ano do nascimento
    int idade; //
    int mesN;
    int diaN;

    printf("Digite o ano do seu nascimento:");
    scanf ("%i", &anoN);

    printf("Digite o mes do seu nascimento:");
    scanf ("%i", &mesN);


    printf("Digite o dia do seu nascimento:");
    scanf ("%i", &diaN);

    idade = anoA - anoN;

    if(mesN > mesA){
        idade = idade - 1;
    }else if (mesN==mesA){
        if (diaN > diaA){
            idade = idade - 1;

        }
}

    printf("voce tem %i anos", idade);

    return (0);


}
