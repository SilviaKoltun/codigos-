# include <stdio.h>

int main (){

    int numero [10];
    int i;

        for (i = 0; i < 10; i++) {  // leitura de valores
        printf ("Digite o valor %d: ",i);
        scanf ("%d",&numero [i]);
    }

    for (i=0; i<10 ; i++) {  //exibição de valores
        printf ("numero [%d] = %d\n", i, numero[i]);

    }

    return 0;

}
