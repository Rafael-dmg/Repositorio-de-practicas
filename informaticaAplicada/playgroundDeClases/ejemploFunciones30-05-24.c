#include <stdio.h>
#define P printf
#define S scanf

//CREAR FUNCIONES DE MAXIMO Y MINIMO

void cargarDato(int*);
int maximo (int, int);
int minimo (int, int);

int main (void)
{
  int num, max, min, flag = 0;


  do
  {
    cargarDato(&num);

    if(flag)
    {
      max = num;
      min = num;
      flag = 0;

    } else
    {
      max = maximo(max,num);
      min = minimo(min, num);
    }

  }while (num);
}

int maximo (int max, int num)
{

}

int minimos (int max, int num)
{
  
}