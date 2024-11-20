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
    while (1) {
        if (scanf("%d", &opcion) != 1) {
            // Si el usuario ingresa un dato no válido
            printf("Entrada no válida. Intente de nuevo: ");
            while (getchar() != '\n'); // Limpiar el buffer de entrada
        } else if (opcion < min || opcion > max) {
            printf("Opción fuera de rango (%d-%d). Intente de nuevo: ", min, max);
        } else {
            break; // Opción válida
        }
    }
    return opcion;
}

// Función para ejecutar una opción del menú
void ejecutarOpcion(int opcion) {
    int subopcion;
    switch (opcion) {
        case 1:
            printf("Ha seleccionado Opción 1\n");
            printf("1. Realizar acción 1\n");
            printf("2. Volver al menú principal\n");
            printf("Ingrese su opción: ");
            subopcion = validarOpcion(1, 2);
            if (subopcion == 1) {
                printf("Ejecutando acción 1...\n");
            } else {
                printf("Regresando al menú principal...\n");
            }
            break;
        case 2:
            printf("Ha seleccionado Opción 2\n");
            printf("1. Realizar acción 2\n");
            printf("2. Volver al menú principal\n");
            printf("Ingrese su opción: ");
            subopcion = validarOpcion(1, 2);
            if (subopcion == 1) {
                printf("Ejecutando acción 2...\n");
            } else {
                printf("Regresando al menú principal...\n");
            }
            break;
        case 3:
            printf("Ha seleccionado Opción 3\n");
            printf("1. Realizar acción 3\n");
            printf("2. Volver al menú principal\n");
            printf("Ingrese su opción: ");
            subopcion = validarOpcion(1, 2);
            if (subopcion == 1) {
                printf("Ejecutando acción 3...\n");
            } else {
                printf("Regresando al menú principal...\n");
            }
            break;
        case 4:
            printf("Saliendo del programa...\n");
            break;
        default:
            printf("Opción no válida\n");
            break;
    }
}

int main() {
    int opcion;

    do {
        mostrarMenu();
        opcion = validarOpcion(1, 4);
        if (opcion != 4) {
            ejecutarOpcion(opcion);
        }
    } while (opcion != 4);

    return 0;
}
