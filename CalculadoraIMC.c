#include<stdio.h>
#include<stdlib.h>

int main(){
    float peso, altura;
    float IMC;

    printf ("Digite seu peso");
    scanf ("%f",&peso);

    printf ("Digite sua altura");
    scanf ("%f",&altura);

    IMC = peso / (altura*altura);

    if (IMC <=18.5){
        printf ("Abaixo do Peso");
    }
    else if (IMC >=18.5 &&IMC <=24.9){
        printf ("Peso Normal");
    }
     else if (IMC >=25 &&IMC <=29.9){
        printf ("Sobre Peso");
     }
    else if (IMC >30){
        printf ("obesidade");
    }

   return 0;

}
