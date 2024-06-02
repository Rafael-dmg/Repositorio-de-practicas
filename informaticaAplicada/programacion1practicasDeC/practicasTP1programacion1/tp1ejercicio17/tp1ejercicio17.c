// 17. Construye un programa que permita ingresar las medidas de los lados de un rectángulo; el mismo debe emitir por pantalla su superficie y su perímetro.

#include <stdio.h>
#define P printf
#define S scanf

int main () 
{
    int lado, cuadrado;
    P ("ingresa el lado: ");
    S ("%d",&lado);
    cuadrado = lado*lado;
    printf("El area del cuadrado es: ""\n" "%d\n",cuadrado);

    return 0;
}

//EL EJERCICIO NO CORRESPONDE