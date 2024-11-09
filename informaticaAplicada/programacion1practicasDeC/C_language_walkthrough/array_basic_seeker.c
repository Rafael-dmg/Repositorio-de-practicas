#include <stdio.h>

int main() {
    int vector[] = {10, 20, 30, 40, 50};
    int valor = 30; // El valor que queremos encontrar
    int tamano = sizeof(vector) / sizeof(vector[0]);
    int posicion = -1; // Inicializamos con -1 para indicar "no encontrado"

    for (int i = 0; i < tamano; i++) {
        if (vector[i] == valor) {
            posicion = i; // Guardamos la posición
            break;        // Salimos del bucle si encontramos el valor
        }
    }

    if (posicion != -1) {
        printf("El valor %d se encuentra en la posicion %d del vector.\n", valor, posicion);
    } else {
        printf("El valor %d no se encuentra en el vector.\n", valor);
    }

    return 0;
}
