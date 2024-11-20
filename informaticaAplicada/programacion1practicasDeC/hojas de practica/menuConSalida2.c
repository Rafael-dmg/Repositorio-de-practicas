#include <stdio.h>

// Función para mostrar el menú principal
void mostrarMenu() {
    printf("\n===== MENÚ PRINCIPAL =====\n");
    printf("1. Opción 1\n");
    printf("2. Opción 2\n");
    printf("3. Opción 3\n");
    printf("4. Salir\n");
    printf("Ingrese su opción: ");
}

// Función para validar la opción ingresada
int validarOpcion(int min, int max) {
    int opcion;
    int entradaValida = 0;
    
    while (!entradaValida) {
        if (scanf("%d", &opcion) != 1) {
            // Si el usuario ingresa un dato no válido
            printf("Entrada no válida. Intente de nuevo: ");
            while (getchar() != '\n'); // Limpiar el buffer de entrada
        } else if (opcion < min || opcion > max) {
            printf("Opción fuera de rango (%d-%d). Intente de nuevo: ", min, max);
        } else {
            entradaValida = 1; // Entrada válida
        }
    }
    return opcion;
}

// Función para ejecutar la opción 1
void opcion1() {
    int subopcion = 0;
    while (subopcion != 2) {
        printf("Ha seleccionado Opción 1\n");
        printf("1. Realizar acción 1\n");
        printf("2. Volver al menú principal\n");
        printf("Ingrese su opción: ");
        subopcion = validarOpcion(1, 2);
        if (subopcion == 1) {
            printf("Ejecutando acción 1...\n");
        }
    }
}

// Función para ejecutar la opción 2
void opcion2() {
    int subopcion = 0;
    while (subopcion != 2) {
        printf("Ha seleccionado Opción 2\n");
        printf("1. Realizar acción 2\n");
        printf("2. Volver al menú principal\n");
        printf("Ingrese su opción: ");
        subopcion = validarOpcion(1, 2);
        if (subopcion == 1) {
            printf("Ejecutando acción 2...\n");
        }
    }
}

// Función para ejecutar la opción 3
void opcion3() {
    int subopcion = 0;
    while (subopcion != 2) {
        printf("Ha seleccionado Opción 3\n");
        printf("1. Realizar acción 3\n");
        printf("2. Volver al menú principal\n");
        printf("Ingrese su opción: ");
        subopcion = validarOpcion(1, 2);
        if (subopcion == 1) {
            printf("Ejecutando acción 3...\n");
        }
    }
}

int main() {
    int opcion = 0;

    while (opcion != 4) {
        mostrarMenu();
        opcion = validarOpcion(1, 4);

        if (opcion == 1) {
            opcion1();
        } else if (opcion == 2) {
            opcion2();
        } else if (opcion == 3) {
            opcion3();
        } else if (opcion == 4) {
            printf("Saliendo del programa...\n");
        }
    }

    return 0;
}
