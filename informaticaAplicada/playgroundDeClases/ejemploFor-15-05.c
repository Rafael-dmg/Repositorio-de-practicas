//ejemplo 1

#include <stdio.h>
#define p printf
#define s scanf
int main (void) 
{
    int contador;

    contador=0;

    while (contador <5)
    {
        p("Hola\n");
        contador++;
    }


    do{
    contador=0;
        p("Hola\n");
        contador++;
    }while (contador <5);


        p("Ciclo for\n");
    for (contador=0; contador<5; contador++)
    {
        p("Hola\n");
    }
    



    return 0;

}
