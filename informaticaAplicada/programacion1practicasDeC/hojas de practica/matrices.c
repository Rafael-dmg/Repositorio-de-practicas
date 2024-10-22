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
#define TAM 100

int miMatriz[long_][long_];

void CargarMatriz(int [long_][long_]);
void MostrarMatriz(int [long_][long_]);
int Mayor(int [long_][long_]);
void Encontrar(int [long_][long_], int mayor);
int Buscar(int, int);

int main()
{
  int mayor, fil=0, col=0, resul;

  srand(time (NULL));
  CargarMatriz(miMatriz);
  MostrarMatriz(miMatriz);
  mayor = Mayor(miMatriz);
  printf("El mayor es: %d\n", mayor);
  Encontrar(miMatriz, mayor);

  do
  {
    
    resul = Buscar(fil, col);
    if(resul > 0)
      p("EL valor buscado es:\n%d", resul);

  } while(fil > 0 && col > 0);

}

void CargarMatriz(int miMatriz[long_][long_])
{
  int CS=100, Ci=1, i, j;

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
  // Define el tamaño máximo del vector

void Encontrar(int mat[long_][long_], int mayor) {
  int i, j, fil = 0, col = 0, cont = 0, indice = 0;
  int vector[TAM];  // Declara el vector

  for (i = 0; i < long_; i++) {
    for (j = 0; j < long_; j++) {
      if (mayor == mat[i][j]) {
        fil = i;
        col = j;
        cont++;

        if (indice < TAM) {
          vector[indice] = mat[i][j]; // Guarda el valor en el vector
          indice++; 
        } else {
          printf("Error: El vector está lleno\n");
          return;  // Sale de la función si el vector está lleno
        }
      }
    }
  }

  printf("El mayor es: %d y el último registrado está en las coordenadas %d,%d\n", mayor, fil, col);
  printf("El mayor fue registrado %d veces en la matriz\n", cont);

  printf("Los valores iguales al mayor en el vector son:\n");
  for (i = 0; i < indice; i++) {
    printf("[ %d ]", vector[i]);
  }
  printf("\n");
}

int Buscar(int fil, int col) 
{
  int resul=0;
  // p("Ingrese una opcion");
  // s("%d", &opcion);
  p("Ingrese la fila y la columna donde desea buscar\n");
  p("Ingrese la fila\n");
  s("%d", &fil);

  p("Ingrese la columna\n");
  s("%d", &col);

      if (miMatriz[fil][col]>0)
      {
        resul = miMatriz[fil][col];
        return miMatriz[fil][col];
      } else 
        return 1;
  
}





/*
float CalcularPromedio(int mat[long_][long_])
{
    int i, j, suma = 0;
    for (i = 0; i < long_; i++)
    {
        for (j = 0; j < long_; j++)
        {
            suma += mat[i][j];
        }
    }
    return (float)suma / (long_ * long_);
}
-------------------------------------------------------------
int ContarPares(int mat[long_][long_])
{
    int i, j, cont = 0;
    for (i = 0; i < long_; i++)
    {
        for (j = 0; j < long_; j++)
        {
            if (mat[i][j] % 2 == 0)
            {
                cont++;
            }
        }
    }
    return cont;
}
--------------------------------------------------------------
int esPrimo(int num) {
  if (num <= 1) {
    return 0;  // 0 y 1 no son primos
  }
  for (int i = 2; i <= sqrt(num); i++) {
    if (num % i == 0) {
      return 0;  // No es primo si es divisible por algún número entre 2 y su raíz cuadrada
    }
  }
  return 1;  // Es primo si no es divisible por ningún número en el rango anterior
}
*/