#include<stdio.h>

int main ()
{
    float centimetros;
    int pies, pulgadas;

    printf("Ingrese el valor de los centimetros\n");
    scanf("%f", &centimetros);

    pies = centimetros / 30.48;
    pulgadas = centimetros / 2.54;

    printf("los centimetros dados,  en pies son: %d\n", pies);
    printf("Y en pulgadas son: %d", pulgadas);

}