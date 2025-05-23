#include <stdio.h>
#include <stdlib.h>

int main (){
    float num1, num2;
    char operador;

    printf ("digite o num1: ");
    scanf ("%f",&num1);

    printf ("digite o num2: ");
    scanf ("%f",&num2);

    printf ("digite o operador (+,-,*,/): ");
    scanf ("%s",&operador);

    switch (operador){
        case '+':
            printf("%f + %f = %f", num1, num2, num1+num2);
            break;
        case '-':
            printf("%f - %f = %f", num1, num2, num1-num2);
            break;
         case '*':
            printf("%f * %f = %f", num1, num2, num1*num2);
            break;
         case '/':
            printf("%f / %f = %f", num1, num2, num1/num2);
            break;
         default:
            printf ("operacao invalida");
    }

    return (0);

}
