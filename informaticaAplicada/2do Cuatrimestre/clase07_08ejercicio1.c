#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define N 5

int main (void)
{
  int mat[N][N],i,j, CS=100, Ci=1;
  srand(time(NULL)); // semilla aleatoria

  for(i=0;i<N;i++)
  {
    for(j=0;j<N;j++)
    {
      mat[i][j]=rand()%(CS-Ci + 1) + Ci;
    }
  }

  for(i=0;i<N;i++)
  {
    for(j=0;j<N;j++)
    {
      printf("%3d", mat[i][j]);
    }
    printf("\n");
  }

  return 0;

}