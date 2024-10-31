#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define p printf
#define s scanf
#define long_ 10
#define TAM 100

typedef struct {
    int edad;
    char nombre[30];
    char curso[30];
    float promedio;
} alumno;

int main()
{   
    alumno alumno[long_];
    int c;

    p("ingresa la edad del pibe pa\n");
    s("%d", &alumno[1].edad);
    getchar();

    p("ingresa la edad del septimo pibe pa (a ver si cerramo' la fabrica eh)\n");
    s("%d", &alumno[7].edad);
    getchar();

    p("Y los nombre? lo pibe no tienen nombre? Dale, nombre del primer pibe\n");
    fgets(alumno[1].nombre,30,stdin);

    p("Y el segundo pibe?\n");
    fgets(alumno[7].nombre,30,stdin);

    p("este pibe tiene %d anios\n", alumno[1].edad);
    p("este otro pibe tiene %d anios\n", alumno[7].edad);
    p("El pibe 1 se llama: %s", alumno[1].nombre);

    p("lo quere una bocha no? Y: para si. Cualquier otra tecla para no\n");
    c = getchar();

    if(c == 'Y' || c == 'y')
    {
        p("todo pipi cucu");
        return 0;
    } else 
        p("error y de los feos");
        return 1;
        

}

/*Como entro a llenar esa estructura?*/