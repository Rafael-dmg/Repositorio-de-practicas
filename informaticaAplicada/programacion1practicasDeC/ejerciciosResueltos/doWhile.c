#include <stdio.h>

int main() {
    float suma = 0,venta;

    do {
        printf("Ingresa un valor:\n");
        scanf("%f",&venta);
         suma += venta;
    }while(venta > 0);{       
        printf("la suma es: %.2f\n",suma);
    }
    return 0;
}
