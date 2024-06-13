#include <stdio.h>
#define P printf
#define S scanf

int mostrarDatos(int, int, int);
int registrarAsistencia(int);/*falta el puntero*/
void mostrarEstadisticas(int, int, int);
int areaMasConcurrida(int, int, int, int, int, int); /*faltaron los punteros que indiquen el espacio de memoria de las variables a utilizar de mayor, medio y menor*/
int menu(void); /*Si la funcion devolvera un valor porque seria void?*/

int main (void)
{
  int biblioteca, laboratorio, aula, elec, mayor, medio, menor;
  float promedio;

  int op;

  do 
  {
    op =menu(); /*faltan los parametros de la funcion*/
    switch(op)
    {
      case 1:
        do
        {
          registrarAsistencia(elec); /*Le falta el ampersand al parametro para indicarle que el dato se guardara ahi (&)*/
        } while (elec != 0); /*este while deberia estar debajo del switch 
        para asi poder salir del bucle con los datos cargados*/
          switch (elec)
          {
          case 1:
              do
              {
                  P("Cargue alumnos de Laboratorio\n");
                  S("%d", biblioteca); /*falto el ampersand*/
              } while (biblioteca <= 0);
                break;
          case 2:

              do
            {
                P("Cargue alumnos de Biblioteca\n");
                S("%d", laboratorio);  /*falto el ampersand*/
            } while (laboratorio <= 0);
            /*como salimos de aca sin un break?*/
          case 3:

              do
          {
              P("Cargue alumnos de Aula\n");
              S("%d", aula);  /*falto el ampersand*/
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

  } while (op); /*???*/

  return 0;
}

menu(void) /*no indique el tipo de funcion, ademas de no haber incluido 
el parametro con el que trabajara la funcion, ATENCION*/
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
  S("%d\n", &op); /* el "\n" en un scanf genera errores inesperados, en este caso
  genera que se deba ingresar dos veces el dato 'op' para poder entrar a 
  la opcion seleccionada*/

  return op;
}

int registrarAsistencia(int elec) /*falta el puntero*/
{

  P("Ingrese el area que desea cargar");
  P("1.- Para Laboratorio");
  P("2.- Para Biblioteca");
  P("3.- Para Aula");
  P("0.- Salir");
  S("%d", elec);

  /*la variable espera un retorno de tipo int pero: ni usamos el return indcando la finalizacion
  de la funcion, y ademas no usamos el ampersand. Tambien se puede resolver usando void y colocando el
  ampersand en el destino donde se solicita el espacio en memoria para saber valor actual del parametro*/
}


int mostrarDatos(int biblioteca, int laboratorio, int aula)
{
  P("Laboratorio: %d\n", biblioteca);
  P("Biblioteca: %d\n", laboratorio);
  P("Aula: %d\n", aula);

  /*la variable espera un retorno de tipo int pero no se lo indicamos*/
}

void mostrarEstadisticas(int biblioteca, int laboratorio, int aula)
{

  promedio = (biblioteca + laboratorio + aula) / 3;
  /*la variable 'promedio' no tiene el tipo de variable por lo que no la reconoce,
  ademas no se usa en la funcion asi que 
  aparece un error*/
}

int areaMasConcurrida (int biblioteca, int laboratorio, int aula, int mayor, int medio, int menor); /*este punto y coma no va aqui!*/ /*faltaron los punteros que indiquen el espacio de memoria de las variables*/
{

  /**/
  mostrarDatos(biblioteca, laboratorio, aula) /*AQUI SI VA UNO*/
  
  if (biblioteca > laboratiorio && biblioteca > aula) /*laboratorio esta mal escrito*/
  {
    *mayor = biblioteca; /*falto puntero que indique que se el espacio de memoria de la variable*/
      if(laboratorio > aula)
      {
        *medio = laboratorio; /*falto puntero que indique que se el espacio de memoria de la variable*/
        *menor = aula; /*aca tambien falta un punto y coma*/ /*falto puntero que indique que se el espacio de memoria de la variable*/
      }else
      {
        *medio = aula; /*falto puntero que indique que se el espacio de memoria de la variable*/
        *menor = laboratorio; /*falto puntero que indique que se el espacio de memoria de la variable*/
      }
  } /*falta el resto de la funcion*/
  
    /*si la funcion tiene es de tipo retorno debe retornar algo, asi que falta el return :D*/
}