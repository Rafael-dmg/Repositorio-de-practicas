/*
sintaxis de matriz:
tipoDatos(ejemplo char) nombreMatriz[fila][columna]
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

#define p printf
#define s scanf
#define long_ 10

int miMatriz[long_][long_];

void CargarMatriz(int [long_][long_]);
void MostrarMatriz(int [long_][long_]);
int Mayor(int [long_][long_]);
void Encontrar(int [long_][long_], int mayor);

int main()
{
  int miMatriz[long_][long_], mayor, fil, col;

  srand(time (NULL));
  CargarMatriz(miMatriz);
  MostrarMatriz(miMatriz);
  mayor = Mayor(miMatriz);
  printf("El mayor es: %d\n", mayor);
  Encontrar(miMatriz, mayor);

  p("El valor de la celda 2,6 es: %d", miMatriz[2][6]);
}

void CargarMatriz(int miMatriz[long_][long_])
{
  int CS=long_, Ci=1, i, j;

  for (int i = 0; i < long_; i++)
  {
    for (int j = 0; j < long_; j++)
    {
      miMatriz[i][j]=rand()%(CS - Ci + 1) + Ci;
    }
  }
}

void MostrarMatriz(int miMatriz[long_][long_])
{
  int i, j;

    for(i=0;i<long_;i++)
    {
      for(j=0;j<long_;j++)
      {
        printf("[ %d ]", miMatriz[i][j]);
      }
      printf("\n");
    }

}

int Mayor(int miMatriz[long_][long_]){
    int i, j, mayor, fil=0, col=0;
    mayor = miMatriz[0][0];
    for (i=0; i<long_; i++)
    {
      for (j=0; j<long_; j++)
      {
          if (miMatriz[i][j]>mayor)
          {
            mayor = miMatriz[i][j];
          
          }
      }
    }
    return mayor;
}

void Encontrar(int mat[long_][long_], int mayor)
{
    int i, j, fil = 0, col = 0, cont = 0;

    for (i = 0; i < long_; i++)
    {
        for (j = 0; j < long_; j++)
        {
            if (mayor == mat[i][j])
            {
                fil = i;
                col = j;
                cont++;
            }
        }
    }

    printf("El mayor es: %d y el último registrado está en las coordenadas %d,%d\n", mayor, fil, col);
    printf("El mayor fue registrado %d veces en la matriz\n", cont);
}