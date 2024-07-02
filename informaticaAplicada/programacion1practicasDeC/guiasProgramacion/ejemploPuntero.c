#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define p printf
#define s scanf

int main()
{
    int num, num2;
    int *ptr, *ptr2;

    p("\nIngrese un valor: ");
    s("%d",&num);
    num2 = 5;

    ptr = &num;
    ptr2 = &num2;

    p("\nValor ingresado: %d", *ptr);
    p("\nDireccion del valor: %X", ptr);
    p("\nValor ingresado: %d", *ptr2);
    p("\nDireccion del valor: %X", ptr2);

    return 0;
}

