# include <stdio.h>

//Ler 6 n�meros inteiros e imprimir apenas os n�meros negativos.Dica: Verifique se o n�mero � menor que zero antes de imprimir.

    int main (){
        int i, n;
        int numero [6];

    for (i =0; i < 6; i++) {
        printf ("Digite o numero %d: ",i + 1);
        scanf ("%d",&numero [i]);
        }

    printf ("Numero Negativo \n");
    for (i=0; i<n; i++) { //verificar se o numero � menor
        if (numero [i] <0){
            printf ("%d\n" ,numero [i]);
        }
    }

    return 0;
}
