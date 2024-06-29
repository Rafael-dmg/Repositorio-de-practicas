// #include <stdio.h>
// #define P printf
// #define S scanf
// #define TAMANO_VECTOR 5

// /*
// stdlib.h
// time.h
// string.h
// ctype.h
// math.h
// */

// int main ()
// {
//   int vector[TAMANO_VECTOR];
//   int i;
//   srand(time(NULL));

//   //inicializar el vector con valores
//   for (i = 0; i < TAMANO_VECTOR; i++)
//   {
//     vector[i] = rand()%(100-20+1)+20;
//   }

// //Imprimir el valor
// for (i = 0; i < TAMANO_VECTOR; i++)
// {
//   P("vector[%d]=%2d\n ", i, vector[i]);
// }

// P("\n");

// return 0;

// }

/*Ejercicio 1: Escribir una funcion que reciba como parametro un vector de enteros y el tamano definido por 
uds y calcule la suma de todos los elementos del vector. (Utilizar funciones)*/

#include <stdio.h>
#define P printf
#define S scanf
#define TAMANO_VECTOR 15

int VectorEnteros(int[], int*);
void Promedio(int);

int main()
{ 
  float prom = 0;
  int valores[TAMANO_VECTOR];
  int i, suma;
  srand(time(NULL));

  VectorEnteros(valores, &suma);

  /*Ejercicio 2: finalizado el ejercicio 1, armar una funcion que calcule el promedio*/

  Promedio(suma);

  return 0;
}

int VectorEnteros(int valores[], int *suma)
{
  int i;

  for (i = 0; i < TAMANO_VECTOR; i++)
  {
      valores[i] = rand()%(101); //aca va del cero al 100, se escribe uno mas siempre para que incluya el tope del rango

      *suma += valores[i];

      P("valor -%d- es igual a: %d\n", i+1, valores[i]);
      P("la suma de los valores es: %d\n", *suma);
  }



  return *suma;
}

void Promedio(int suma)
{

  float prom = (float)suma / TAMANO_VECTOR;

  P("el Promedio es: %.2f\n", prom);
}
