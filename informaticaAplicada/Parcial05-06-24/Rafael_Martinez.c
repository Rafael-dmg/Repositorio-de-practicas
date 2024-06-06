#include <stdio.h>
#define P printf
#define S scanf

int mostrarDatos(int, int, int);
int registrarAsistencia(int);
void mostrarEstadisticas(int, int, int);
int areaMasConcurrida(int, int, int, int, int, int);
int menu(void);

int main (void)
{
  int biblioteca, laboratorio, aula, elec, mayor, medio, menor;
  float promedio;

  int op;

  do 
  {
    op =menu();
    switch(op)
    {
      case 1:
        do
        {
          registrarAsistencia(elec);
        } while (elec != 0);
        switch (elec)
        {
        case 1:
            do
            {
                P("Cargue alumnos de Laboratorio\n");
                S("%d", biblioteca);
            } while (biblioteca <= 0);
              break;
        case 2:

            do
          {
              P("Cargue alumnos de Biblioteca\n");
              S("%d", laboratorio);
          } while (laboratorio <= 0);
        case 3:

            do
        {
            P("Cargue alumnos de Aula\n");
            S("%d", aula);
        } while (aula <= 0);
          break;
        }
          break; 

      case 2:
          
          mostrarDatos(biblioteca, laboratorio, aula);
          break; 

      case 3:
          mostrarEstadisticas (biblioteca, laboratorio, aula);
          P("El promedio es de: %.2f\\n", promedio);
          break; 

      case 4:
        areaMasConcurrida(biblioteca, laboratorio, aula, mayor, medio, menor);
          break; 

      case 5: 
          break; 

    }

  } while (op);

  return 0;
}

menu(void)
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
  S("%d\n", &op);

  return op;
}

int registrarAsistencia(int elec)
{

  P("Ingrese el area que desea cargar");
  P("1.- Para Laboratorio");
  P("2.- Para Biblioteca");
  P("3.- Para Aula");
  P("0.- Salir");
  S("%d", elec);
}


int mostrarDatos(int biblioteca, int laboratorio, int aula)
{
  P("Laboratorio: %d\n", biblioteca);
  P("Biblioteca: %d\n", laboratorio);
  P("Aula: %d\n", aula);
}

void mostrarEstadisticas(int biblioteca, int laboratorio, int aula)
{
  int promedio; 

  promedio = (biblioteca + laboratorio + aula) / 3;
}

int areaMasConcurrida(int biblioteca, int laboratorio, int aula, int mayor, int medio, int menor);
{
  mostrarDatos( biblioteca, laboratorio, aula)
  
  if(biblioteca > laboratiorio && biblioteca > aula)
  {
    mayor = biblioteca;
      if(laboratorio > aula)
      {
        medio = laboratorio;
        menor = aula
      }else
      {
        medio = aula;
        menor = laboratorio;
      }
  }
    
}
        
      