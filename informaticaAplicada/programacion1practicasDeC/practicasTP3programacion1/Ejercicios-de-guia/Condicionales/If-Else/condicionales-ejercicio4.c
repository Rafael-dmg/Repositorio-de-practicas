#include <stdio.h>
// #define P printf
// #define S scanf



int main () 
{
    float coefA, coefB, res;

    printf("ingrese valor A: ");
    scanf("%f", &coefA);
    printf("Ingrese valor B: ");
    scanf("%f", &coefB);

    if((coefA == 0) &&  (coefB == 0)) 
    
            printf("Ecuacion A X + B = 0 \n Todos los numeros son solucion");
        else if (coefA == 0)
            printf("La ecuacion no tiene solucion");
        else {
            res = -coefB/coefA;
            printf("La ecuacion tiene una solucion: %2f", res);
        }
    return 0;
}