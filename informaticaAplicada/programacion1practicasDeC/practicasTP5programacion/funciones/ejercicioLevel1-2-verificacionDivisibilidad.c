#include <stdio.h>
#define P printf
#define S scanf

//prototipo de variables
int esMultiplo(int, int);
void cargarDatos(int*, int*);



int main(void)
{
  int num1, num2, multiplo;

  cargarDatos(&num1, &num2);
  multiplo = esMultiplo(num1, num2);
  if(multiplo == 0)
    P("Son multiplos entre si. \n");
  else
    P("No son multiplos entre si. \n");  
}



void cargarDatos(int* num1, int* num2)
{
  P("Ingrese primer valor: \n");
  S("%d", num1);
  P("Ingrese segundo valor: \n");
  S("%d", num2);

}


int esMultiplo(int num1, int num2)
{
  return num1 % num2;
}
