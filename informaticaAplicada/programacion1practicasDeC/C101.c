#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define N 5

void CargarMatriz(int [N][N]);
void MostrarMatriz(int [N][N]);
void Mayor(int [N][N]);

int main (void)
{
    int mat[N][N]={0};
    srand(time (NULL));
    CargarMatriz(mat);
    MostrarMatriz(mat);
    Mayor(mat);

    return 0;
}

void CargarMatriz(int mat[N][N])
{
    int CS=100, Ci=1, i, j;

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            mat[i][j]=rand()%(CS - Ci + 1) + Ci;
        }
    }
}

void MostrarMatriz(int mat[N][N])
{
      int i, j;

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

void Mayor (int m[N][N]){
    int i, j, max, fil=0, col=0;
    max = m[0][0];
    for (i=0; i<N; i++) {
        for (j=0; j<N; j++){
            if (m[i][j]>max) {
                max = m[i][j];
                fil = i;
                col = j;
            }
        }
    }
    printf ("El mayor valor es %d y esta en la ubicacion (%d;%d)", max, fil, col);
}
