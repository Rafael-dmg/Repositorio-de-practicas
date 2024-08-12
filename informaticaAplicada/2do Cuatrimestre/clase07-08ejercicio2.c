#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define N 10

void CargarMatriz(int [N][N]);
void MostrarMatriz(int [N][N]);

int main (void)
{
  int mat[N][N];
  srand(time(NULL));
  CargarMatriz(mat);
  MostrarMatriz(mat);

  return 0;
}

void CargarMatriz(int mat[N][N])
{

}