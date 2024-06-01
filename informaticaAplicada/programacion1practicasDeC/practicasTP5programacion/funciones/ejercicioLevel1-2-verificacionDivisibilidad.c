#include <stdio.h>
#define p printf
#define s scanf

//prototipo de variables
int verf(int num1, int num2);
//void cargarDato (float*);

float num1, num2, op;
int multiplo;

int main()
{
  p("\nIngrese dato 1  \n");
  s("%f", &num1);
  p("\nIngrese dato 2  \n");
  s("%f", &num2);

  verf(num1, num2);

  p("%d", multiplo);
  //ingresar validacion y e imprimir mensaje de comprobacion de que los datos son multiplos entre ellos
}


// void cargarDato(float* num)
// {
//     p("\nIngrese un numero: ");
//     s("%f", num1);
//     p("\nIngrese un numero: ");
//     s("%f", num2);
// }

int verf(int num1, int num2)
{
  int multiplo;
  multiplo = num1 % num2;
  return multiplo;
}

/*verificacion rapida de verf si es mayor o menor a 1? o de otra manera*/