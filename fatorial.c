#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    int f;
    int i=1; // variavel de controle



     printf ("Digite um numero");
     scanf ("%i", &n);
    f = n;
          while (n-i >0){
            f = f*(n-i);
            i += 1;


        }
        printf ("exibir o resultado: %i", f);

    return 0;



}
