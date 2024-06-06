#include <stdio.h>
#define P printf
#define S scanf

int cargarDatos(int*, int*, int*);
int menuArea(void);
int menu(void);

int main (void)
{
  int inst1, inst2, inst3;

  int op;

  do 
  {
    op =menu();
    switch(op)
    {
      case 1:
          

          break; 

      case 2:
          break; 

      case 3:
          break; 

      case 4:
          break; 

      case 5: 
          break; 

    }

  } while (op);

  return 0;
}

int menu(void)
{
  int op;

  P("*******Instituto*********\n");
  P("******** Gotitas del saber **********n");
  P("1.- cargar cantidad de alumnos por %crea. \n", 160);
  P("2.- mostrar datos ingresados por %crea. \n", 160);
  P("3.- mostrar estad%csticas. \n", 161);
  P("4.- Encontrar %crea m%cs concurrida. \n", 160,160);
  P("5.- Encontrar %crea menos concurrida. \n", 160);
  P("0.- SALIR\n");
  P("INGRESE OPCI%CN: \n", 224);
  S("%d\n", &op);

  return op;
}

int menuArea(void)
{
  int elec;

  P("Ingrese el area que desea cargar");
  S("%d", &elec);
}


int cargarDatos(int *inst1, int *inst2, int *inst3);