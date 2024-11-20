#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50
#define VALOR_HORA 6000

typedef struct {
    int cod_tec;        //codigo tecnico
    char nom_tec[30];   //nombre del tecnico
    int cant_visitas;   // cantidad de visitas
    int horas;          //horas trabajadas
    int pago_acum;    // pago acumulado
} tecnico;

void mostrar(tecnico t[MAX], int n);
void tecla(void);
void cargar(tecnico t[MAX], int *n);

int main() {
    tecnico profesionales[MAX];
    int num_profesionales = 0; //se reperesenta mas abajo con una 'n', esta variable es un contador
    int opcion;

    do {
        printf("\n\nSistema de Gestion de Servicios\n");
        printf("Menu de opciones\n");
        printf("1. Registrar visitas\n");
        printf("2. Mostrar el informe \n");
        printf("0. Salir\n");
        printf("Ingrese su opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                cargar(profesionales, &num_profesionales);
                break;
            case 2:
               mostrar(profesionales, num_profesionales);
               break;
            case 0:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opcion invalida. Intente de nuevo.\n");
        }
    } while (opcion != 0);

    return 0;
}

void cargar(tecnico t[MAX], int *n) {
    int nro_visitas, cod_prof, horas;   //en estos dos renglones declaro las mismas variables que en el struct
    char nom_prof[30];

    while (1) {
        printf("Ingrese Nro. de visita - Si desea salir pulse '0' para salir): ");
        scanf("%d", &nro_visitas);   // la guardo en la variable dentro de esta funcion
        if (nro_visitas == 0) return; // aca salgo porque ingrese cero

        printf("Ingrese el codigo del tecnico: ");
        scanf("%d", &cod_prof);  // la guarda en la variable dentro de esta funcion

        int i;
        int encontrado = 0;
        for (i = 0; i < *n; i++) {      // aca busca
            if (t[i].cod_tec == cod_prof) {  // aca comparo el cod_prof ingresado en esta funcion vs el del struct
                encontrado = 1;              // si lo encuentro le asigno el 1
                break;
            }
        }
            /// aca valida si ya existe el tecnico ingresado
        if (encontrado) { // aca entra si el profesional fue encontrado... o sea cuando encontrado = 1
            printf("Ingrese Cantidad de horas: ");
            scanf("%d", &horas);
            t[i].cant_visitas++;  //suma una visita en el struct en esa posicion, porque se supone que ya tiene una o mas de una
            t[i].horas += horas;  // suma las horas y las guarda en el struct de un tecnico existente
            t[i].pago_acum += horas * VALOR_HORA;

        } else { /// como no existe lo carga,  le pido los datos
            printf("Ingrese Nombre del Tecnico: ");
            fflush(stdin); // Limpia el b�fer de entrada
            fgets(nom_prof, 30, stdin);    // lo guarda en la variable de esta funcion
            //nom_prof[strcspn(nom_prof, "\n")] = '\0'; // Eliminar salto de l�nea

            printf("Ingrese Cantidad de horas trabajadas: ");
            scanf("%d", &horas); // las guarda en la variable de esta funcion

            t[*n].cod_tec = cod_prof;   // aca guarda en el struct en la posicion *n que le manda originalmente el cod_prof ingresado
            strcpy(t[*n].nom_tec, nom_prof);  // aca hace lo mismo para el nombre
            t[*n].cant_visitas = 1; // como es la primer inspeccion, en cantidad de inspecciones pongo una sola.
            t[*n].horas = horas; // resgitro la cant de horas que ingresamos y lo guardo en el struct en la posicion que mandaron
            t[*n].pago_acum = horas * VALOR_HORA; // calcula el pago y lo inserta en el struct en la posicion que mandaron
            (*n)++; // le suma uno a la variable que apunta *n, en este caso num_profesionales
        }
    }
}

void mostrar(tecnico t[MAX], int n) {
    printf("\n \t\tInforme de Servicios de Reparacion Tecnica \n\n");
    printf("\nCod \tTecnico \tVisitas \tHoras \t\tPago\n\n\n");
    for (int j = 0; j < n; j++) {
            printf("%-10d %-20s \t%4d \t\t%4d \t\t%4d \n", t[j].cod_tec, t[j].nom_tec, t[j].cant_visitas, t[j].horas, t[j].pago_acum);
        }
    tecla();
}



void tecla(void) {
    printf("\nPresione cualquier tecla para continuar !!!!\n");
    getch();
    system("cls");
}
