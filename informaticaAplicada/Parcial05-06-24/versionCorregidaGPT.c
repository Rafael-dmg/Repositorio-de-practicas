#include <stdio.h>
#define P printf
#define S scanf

int mostrarDatos(int, int, int);
int registrarAsistencia(int *);
void mostrarEstadisticas(int, int, int);
int areaMasConcurrida(int, int, int, int *, int *, int *);
int menu(void);

int main (void)
{
    int biblioteca = 0, laboratorio = 0, aula = 0, elec = -1, mayor = 0, medio = 0, menor = 0;
    float promedio = 0.0;

    int op;

    do 
    {
        op = menu();
        switch(op)
        {
            case 1:
                do
                {
                    registrarAsistencia(&elec);
                    switch (elec)
                    {
                        case 1:
                            do
                            {
                                P("Cargue alumnos de Laboratorio\n");
                                S("%d", &laboratorio);
                            } while (laboratorio <= 0);
                            break;
                        case 2:
                            do
                            {
                                P("Cargue alumnos de Biblioteca\n");
                                S("%d", &biblioteca);
                            } while (biblioteca <= 0);
                            break;
                        case 3:
                            do
                            {
                                P("Cargue alumnos de Aula\n");
                                S("%d", &aula);
                            } while (aula <= 0);
                            break;
                    }
                } while (elec != 0);
                break; 

            case 2:
                mostrarDatos(biblioteca, laboratorio, aula);
                break; 

            case 3:
                mostrarEstadisticas(biblioteca, laboratorio, aula);
                promedio = (biblioteca + laboratorio + aula) / 3.0;
                P("El promedio es de: %.2f\n", promedio);
                break; 

            case 4:
                areaMasConcurrida(biblioteca, laboratorio, aula, &mayor, &medio, &menor);
                break; 

            case 5: 
                break; 
        }

    } while (op != 0);

    return 0;
}

int menu(void)
{
    int op;

    P("*******Instituto*********\n");
    P("******** Gotitas del saber **********\n");
    P("1.- cargar cantidad de alumnos por %crea. \n", 160);
    P("2.- mostrar datos ingresados por %crea. \n", 160);
    P("3.- mostrar estad%csticas. \n", 161);
    P("4.- Encontrar %crea m%cs concurrida. \n", 160, 160);
    P("5.- Encontrar %crea menos concurrida. \n", 160);
    P("0.- SALIR\n");
    P("INGRESE OPCI%cN: \n", 224);
    S("%d", &op);

    return op;
}

int registrarAsistencia(int *elec)
{
    P("Ingrese el area que desea cargar\n");
    P("1.- Para Laboratorio\n");
    P("2.- Para Biblioteca\n");
    P("3.- Para Aula\n");
    P("0.- Salir\n");
    S("%d", elec);

    return *elec;
}

int mostrarDatos(int biblioteca, int laboratorio, int aula)
{
    P("Laboratorio: %d\n", laboratorio);
    P("Biblioteca: %d\n", biblioteca);
    P("Aula: %d\n", aula);

    return 0;
}

void mostrarEstadisticas(int biblioteca, int laboratorio, int aula)
{
    float promedio = (biblioteca + laboratorio + aula) / 3.0;
    P("Promedio de alumnos: %.2f\n", promedio);
}

int areaMasConcurrida(int biblioteca, int laboratorio, int aula, int *mayor, int *medio, int *menor)
{
    mostrarDatos(biblioteca, laboratorio, aula);
  
    if (biblioteca > laboratorio && biblioteca > aula)
    {
        *mayor = biblioteca;
        if (laboratorio > aula)
        {
            *medio = laboratorio;
            *menor = aula;
        }
        else
        {
            *medio = aula;
            *menor = laboratorio;
        }
    }
    else if (laboratorio > biblioteca && laboratorio > aula)
    {
        *mayor = laboratorio;
        if (biblioteca > aula)
        {
            *medio = biblioteca;
            *menor = aula;
        }
        else
        {
            *medio = aula;
            *menor = biblioteca;
        }
    }
    else
    {
        *mayor = aula;
        if (biblioteca > laboratorio)
        {
            *medio = biblioteca;
            *menor = laboratorio;
        }
        else
        {
            *medio = laboratorio;
            *menor = biblioteca;
        }
    }

    P("Mayor concurrencia: %d\n", *mayor);
    P("Medio concurrencia: %d\n", *medio);
    P("Menor concurrencia: %d\n", *menor);

    return 0;
}
