#include <stdio.h>
#include <stdlib.h>

int main (){
    int preco;
    int desconto;

    printf ("Digite o preço do produto");
    scanf ("%i",&preco);

    if (preco >= 100){
        desconto = preco - preco*0.01;
        printf ("desconto de 10% = %i", desconto);
    }
    else {
        printf ("nao teve desconto");
    }


return(0);

}
