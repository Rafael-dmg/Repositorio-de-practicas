//Calcular el factorial de un numero ingresado por el usuario.

#include <stdio.h>
// #define p printf;
// #define s scanf;

int main(void)
{
   int num, acumulador;

    printf("ingrese un numero natural\n");
    scanf("%d", &num);
    acumulador =0;

    for (int contador = 1; contador<=num; contador++)

       acumulador += contador;
        
     printf("La suma es: %d\n", acumulador);
    
    //En este caso conviene for porque sabemos la cantidad de iteracion (las da el usuario)

    return 0;
}
