#include <stdio.h>

int main() {
    float compra, totalFinal;
    int descuento;

    printf("Ingresar valor de la compra: ");
    scanf("%f", &compra);

    if (compra <= 0) {
        printf("Ingrese un valor de compra valido\n");
        return 1; // Salir del programa si la compra no es válida
    }

    printf("Ingrese el color para aplicar descuento:\n");
    printf("1.- Blanco\n");
    printf("2.- Verde\n");
    printf("3.- Amarilla\n");
    printf("4.- Azul\n");
    printf("5.- Roja\n");
    scanf("%d", &descuento);

    switch (descuento) {
        case 2:
            descuento = 10;
            totalFinal = compra - (compra * 0.10);
            break;
        case 3:
            descuento = 25;
            totalFinal = compra - (compra * 0.25);
            break;
        case 4:
            descuento = 50;
            totalFinal = compra - (compra * 0.50);
            break;
        case 5:
            descuento = 100;
            totalFinal = compra - (compra * 1.00);
            break;
        default:
            descuento = 0;
            printf("No se aplico ningun descuento\n");
            totalFinal = compra; // No se aplica descuento
            break;
    }
    
    printf("El total de su compra es de: %.2f\n", compra);
    printf("El descuento aplicado es de %d%%\n", descuento);
    printf("La cantidad final por su compra es de: %.2f\n", totalFinal);

    return 0;
}
