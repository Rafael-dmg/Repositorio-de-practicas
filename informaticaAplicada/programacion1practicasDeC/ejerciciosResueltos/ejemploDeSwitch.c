Ejercicio 1: Escribe un programa que pida cinco enteros al usuario y los almacene en una matriz. Calcula si la suma de los números almacenados es par o impar.



#include <stdio.h>


int main () {
    int m[5];
    int i, suma=0;
    
    for (i=0;i<5;i++) {
        printf ("Introduce numero [%i]: ",i+1);
        scanf ("%i",&m[i]);
    }
    
    for (i=0;i<5;i++) {
        suma+=m[i];
    }
    
    if (suma%2==0) {
        printf ("\nLa suma es PAR: %i",suma);
    } else {
        printf ("\nLa suma es IMPAR: %i",suma);
    }
    return 0;
}