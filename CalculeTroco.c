#include<stdio.h>
#include<stdlib.h>

int main() {
    float ValorCompra;
    float ValorPago;
    float Troco, resto;
    int x;

    printf ("Digite o Valor da Compra: ");
    scanf ("%f", &ValorCompra);

    printf ("Digite o Valor Pago");
    scanf ("%f", &ValorPago);

    Troco=ValorPago - ValorCompra;


    if (Troco >= 100){
        x = Troco/100;
        Troco = Troco - (x*100);
        //printf("Troco %f", Troco);
        printf ("%i 100 ", x);
    }
    if(Troco >= 50){
        x = Troco/50;
        Troco = Troco - (x*50);
        printf ("%i 50 ", x);
    }
    if(Troco >= 20){
        x = Troco/20;
        Troco = Troco - x*20;
        printf ("%i 20 ", x);
    }
    if(Troco >=10){
        x = Troco/10;
        Troco = Troco - x*10;
        printf ("%i 10 ", x);
    }
    if(Troco >=5){
        x = Troco/5;
        Troco = Troco - x*5;
        printf ("%i 5 ", x);
    }
    if(Troco >=1){
         x = Troco/1;
        Troco = Troco - x*1;
        printf ("%i 1 ", x);
    }
    if(Troco >=0.5){
        x = Troco/0.5;
        Troco = Troco - x*0.5;
        printf ("%i 0.5 ", x);
    }



    return 0;


}
