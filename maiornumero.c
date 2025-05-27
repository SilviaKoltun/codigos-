#include <stdio.h>
#include <stdlib.h>

int main (){
    int numA;
    int numB;

    printf ("digite o numA");
    scanf ("%i",&numA);

    printf ("digite o numB");
    scanf ("%i",&numB);


    if (numA > numB){
        printf ("numA > numB");
    }
    else if (numB > numA){
        printf ("numB > numA");
    }

    else {
        printf ("numA = numB");
    }

    return (0);




}
