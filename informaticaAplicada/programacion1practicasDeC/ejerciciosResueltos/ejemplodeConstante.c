#include <stdio.h>
#define PI 3.1416 /* definición de constante */
int main()
{
    float perim, radio;
    int dos = 2;
    printf(" Calcula el perimetro de una circunferencia\n");
    printf(" Indique el tamanio de radio de la circunferencia\n");
    scanf("%f", &radio);
    perim = dos * PI * radio;
    printf("El perimetro de la circunferencia es %.2f\n", perim);
printf("Valores utilizados para calcular el perimetro:\n");
printf("Constante PI=%f, valor de dos = %d, radio=%0.f ",
PI, dos,radio);
return 0;
}