#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define N 5

void CargarMatriz(int [N][N]);
void MostrarMatriz(int [N][N]);
int Mayor(int [N][N]);
void Encontrar(int [N][N], int);

int main (void)
{

    int mat[N][N], max, aux;
    srand(time (NULL));
    CargarMatriz(mat);
    MostrarMatriz(mat);
    Mayor(mat);
    max = Mayor(mat);
    Encontrar(mat, max);

    

    printf("El mayor es %d y se repite %d veces", max, aux);
    return 0;
}

void CargarMatriz(int mat[N][N])
{
    int CS=15, Ci=1, i, j;

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
}

int Mayor (int mat[N][N]){
    int i, j, max, fil=0, col=0;
    max = mat[0][0];
    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
        {
            if (mat[i][j]>max)
            {
                max = mat[i][j];
                fil = i;
                col = j;
            }
        }
    }

    printf("El mayor es: %d y su posicion es %d,%d\n", max, fil, col);
    return max;
}

void Encontrar(int mat[N][N], int max)
{
    int i, j, aux=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {   
            if(max > mat[i][j])
            {
              aux = aux + 1;
              
            }
            
        }
        
    }
    
     //printf("El mayor %3d se repite %d veces", max, aux);
    
}