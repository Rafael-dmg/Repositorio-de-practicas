#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define p printf
#define s scanf
#define max 100
#define valorHora 1200

typedef struct {
    int cod_prof;      // codigo de profesional
    char nom_prof[30]; // nombre del Profesional
    int cant_insp;     // cantidad de inspecciones
    int horas;         // horas realizadas por inspeccion
    int pago;          // pago acumulado
} registro;

// Prototipos de funciones
void mostrar(registro[max], int);
void tecla(void);
void cargar(registro[max], int *);

int main() {
    registro r[max];  // Array para almacenar los registros
    int n = 0;        // Contador de profesionales registrados
    int opcion;
    
    do {
        p("\n=== MENU DE OPCIONES ===\n");
        p("1. Registrar inspecciones\n");
        p("2. Mostrar informe de inspecciones\n");
        p("0. Salir\n");
        p("Ingrese su opcion: ");
        s("%d", &opcion);
        
        switch(opcion) {
            case 1:
                cargar(r, &n);
                break;
            case 2:
                mostrar(r, n);
                tecla();
                break;
            case 0:
                p("\nGracias por usar el sistema!\n");
                break;
            default:
                p("\nOpcion invalida!\n");
                tecla();
        }
    } while(opcion != 0);
    
    return 0;
}
// Función para buscar un profesional por código
int buscarProfesional(registro r[], int n, int codigo) {
    int i;
    for(i = 0; i < n; i++) {
        if(r[i].cod_prof == codigo) {
            return i;  // Retorna la posición si lo encuentra
        }
    }
    return -1;  // Retorna -1 si no lo encuentra | Retorna -1 para que no se confunda con un valo del arreglo
}

// Función para cargar inspecciones
void cargar(registro r[], int *n) {
    int nroInspeccion, codProf, horas, pos;
    
    // Solicita código del profesional
    p("\nIngrese Codigo de Profesional (0 para terminar): ");
    s("%d", &codProf);
    
    while(codProf != 0) {  // Loop principal basado en código de profesional
        // Solicita número de inspección
        p("Ingrese Nro. de Inspeccion: ");
        s("%d", &nroInspeccion);
        
        p("Ingrese Cantidad de horas: ");
        s("%d", &horas);
        
        // Busca si el profesional ya existe
        pos = buscarProfesional(r, *n, codProf);
        
        if(pos == -1) {  // Si es un nuevo profesional
            r[*n].cod_prof = codProf;
            p("Ingrese Nombre del Profesional: ");
            fflush(stdin);  // Limpia el buffer antes de leer el nombre
            gets(r[*n].nom_prof);
            r[*n].cant_insp = 1;               // Primera inspección
            r[*n].horas = horas;               // Horas de esta inspección
            r[*n].pago = horas * valorHora;    // Calcula el pago
            (*n)++;                            // Incrementa el contador de profesionales
        } else {  // Si el profesional ya existe
            r[pos].cant_insp++;                // Incrementa contador de inspecciones
            r[pos].horas += horas;             // Suma las nuevas horas
            r[pos].pago += horas * valorHora;  // Suma el nuevo pago
        }
        
        // Solicita siguiente código de profesional
        p("\nIngrese Codigo de Profesional (0 para terminar): ");
        s("%d", &codProf);
    }
}

// Función para mostrar el informe
void mostrar(registro r[], int n) {
    int j;
    p("\n \t\t\tInforme de Inspecciones \n\n");
    p("\n Cod \t Profesional\t\t Visitas Horas\tSueldo\n\n\n");
    
    for(j = 0; j < n; j++) {
        p("\n %-10d%-20s %4d\t %4d\t\t%4d\n\n", 
          r[j].cod_prof, r[j].nom_prof, r[j].cant_insp, 
          r[j].horas, r[j].pago);
    }
}

// Función para limpiar pantalla y esperar tecla
void tecla(void) {
    p("\nPresione cualquier tecla para continuar !!!!\n");
    getch();
    system("cls");
}

