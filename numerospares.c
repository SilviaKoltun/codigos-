# include <stdio.h>

//Ler 10 n�meros inteiros e imprimir quantos deles s�o pares.


    int main() {
        int numero [10];
        int par = 0;
        int i;

    for (i = 0; i < 10; i++) {  // leitura de valores
        printf ("Digite o numero %d: ",i + 1);
        scanf ("%d",&numero [i]);
    }

    for (i=0; i<10 ; i++) {  //verificar se o numero � par
        if (numero[i]% 2 == 0){
        par ++;
        }
    }
    printf ("Quantidade de numeros pares: %d \n", par);

    return 0;
}
