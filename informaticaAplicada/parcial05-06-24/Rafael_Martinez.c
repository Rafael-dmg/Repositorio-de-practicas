#include <stdio.h>
#define P printf
#define S scanf

int mostrarDatos(int, int, int);
void registrarAsistencia(int*);
void mostrarEstadisticas(int, int, int);
int areaMasConcurrida(int, int, int, int*, int*, int*);
int areaMenosConcurrida(int , int , int , int *mayor, int *medio, int *menor);
int menu(void);

int main (void)
{
  int op, biblioteca, laboratorio, aula, elec, mayor, medio, menor;

  do
  {
    op =menu();
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
                    if (laboratorio > 50)
                    P("La cantidad maxima cantidad de alumnos es de 50 por sector\n");
                } while (laboratorio <= 0 || laboratorio >50);
                break;

              case 2:
                 do
                {
                    P("Cargue alumnos de Biblioteca\n");
                    S("%d", &biblioteca);
                    if (biblioteca > 50)
                    P("La cantidad maxima cantidad de alumnos es de 50 por sector\n");
                } while (biblioteca <= 0 || biblioteca >50);
                  break;

              case 3:
                  do
              {
                  P("Cargue alumnos de Aula\n");
                  S("%d", &aula);
                  if (aula > 50)
                    P("La cantidad maxima cantidad de alumnos es de 50 por sector\n");
              } while (aula <= 0 || aula <50);
                break;

            }

          } while (elec != 0);
          break;

        case 2:

                mostrarDatos(biblioteca, laboratorio, aula);
                break;

        case 3:
                mostrarEstadisticas (biblioteca, laboratorio, aula);
                break;

        case 4:
            areaMasConcurrida(biblioteca, laboratorio, aula, &mayor, &medio, &menor);
                break;

        case 5:
            areaMenosConcurrida(biblioteca, laboratorio, aula, &mayor, &medio, &menor);
                break;
     }

} while (op != 0);

  return 0;
}

int menu (void)
{
  int op;

  P("*******Instituto*********\n");
  P("******** Gotitas del saber **********\n");
  P("1.- cargar cantidad de alumnos por %crea. \n", 160);
  P("2.- mostrar datos ingresados por %crea. \n", 160);
  P("3.- mostrar estad%csticas. \n", 161);
  P("4.- Encontrar %crea m%cs concurrida. \n", 160,160);
  P("5.- Encontrar %crea menos concurrida. \n", 160);
  P("0.- SALIR\n");
  P("INGRESE OPCI%cN: \n", 224);
  S("%d", &op);

  return op;
}

void registrarAsistencia(int *elec)
{

  P("Ingrese el area que desea cargar\n");
  P("1.- Para Laboratorio\n");
  P("2.- Para Biblioteca\n");
  P("3.- Para Aula\n");
  P("0.- Salir\n");
  S("%d", elec);
}


int mostrarDatos(int biblioteca, int laboratorio, int aula)
{
  P("Laboratorio: %d\n", biblioteca);
  P("Biblioteca: %d\n", laboratorio);
  P("Aula: %d\n", aula);

  return 0;
}

void mostrarEstadisticas(int biblioteca, int laboratorio, int aula)
{
    int porcentajeBib, porcentajeLab, porcentajeAu;
    int alumBiblioteca  = 50;
    int alumLaboratorio = 50; 
    int alumAula = 50;

  float promedio = (biblioteca + laboratorio + aula) / 3.0;
 
    porcentajeBib = ((float)biblioteca / alumBiblioteca) * 100;
    porcentajeLab = ((float)laboratorio / alumLaboratorio) * 100;
    porcentajeAu = ((float)aula / alumAula) * 100;

    P("El promedio de alumnos es: %.2f\n", promedio);
    P("El porcentaje de alumnos en Laboratorio es: %d%%\n", porcentajeLab);
    P("El porcentaje de alumnos en Aula es: %d%%\n", porcentajeAu);
    P("El porcentaje de alumnos en Biblioteca es: %d%%\n", porcentajeBib);
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

    return 0;

}


int areaMenosConcurrida(int biblioteca, int laboratorio, int aula, int *mayor, int *medio, int *menor)
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

    P("Menor concurrencia: %d\n", *menor);

    return 0;

}