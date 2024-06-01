/*Imprimir una tabla de multiplicar para un numero ingresado por el usuario  
(1*n, 2*n, 3*n...hasta llegar al mismo numero ingresado por el usuario n*n)*/

#include <stdio.h>

int n, valor, base;

int main()
{
    base =1;

    printf("Ingrese un numero");
    scanf("%d", &n);

    for ( valor = 0; valor <= n; valor++)
    {
        base += valor;
        base = base*n;
    }
        printf("%d\n", base);
}