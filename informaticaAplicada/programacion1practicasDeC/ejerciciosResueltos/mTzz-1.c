Ejercicio 3: Escribe un programa, que trabajando mediante funciones, presente un menú al usuario, rote la columnas a la derecha y suma filas.




  

#include <stdio.h>  
#define DIMENSION 3  
  
int m[3][3]={10,20,30,40,50,60,70,80,90};  
int n[3][3];  
int a,b,f,c, opcion, suma, resultado;  
  
int IntroduceMatriz (int m[3][3], int f, int c);  
int VisualizaMatriz (int m[3][3], int f, int c);  
int RotarMatrizDrcha (int m[3][3], int f, int c);  
int CambiarFilasColumnas (int m[3][3], int f, int c);  
int SumarFilasColumnas (int m[3][3], int f, int c);  
  
  
//struct ciudadano * CargarBBDDCiudadanos (struct *ciudadano, char *, char *, char *);  
  
  
int main () {  
      
  
    do {  
        printf ("--- MENU ---\n");  
        printf ("1. Introducir Matriz\n");  
        printf ("2. Visualizar Matriz\n");  
        printf ("3. Rotar Matriz Derecha\n");  
        printf ("4. Cambiar Filas/Columnas Matriz\n");  
        printf ("5. Sumar Filas\n");  
        printf ("6. Incremento dinero paso por referencia\n");  
        printf ("7. Incremento dinero paso por valor\n");  
        printf ("9. Salir\n\n");  
        printf ("Seleccione: ");  
        scanf ("%i",&opcion);  
        switch (opcion) {  
            case 1:  
                printf ("\nOpcion 1\n\n");  
                IntroduceMatriz (m, f,c);  
            break;  
            case 2:  
                printf ("\nOpcion 2\n\n");  
                VisualizaMatriz (m,f,c);  
            break;  
            case 3:  
                printf ("\nOpcion 3\n\n");  
                RotarMatrizDrcha (m,f,c);  
            break;  
            case 4:  
                printf ("\nOpcion 4\n\n");  
                CambiarFilasColumnas (m,f,c);  
            break;  
            case 5:  
                printf ("\nOpcion 5\n\n");  
                SumarFilasColumnas (m,f,c);  
            break;  
            case 6:  
                printf ("\nOpcion 6\n\n");  
  
            break;  
            case 7:  
                printf ("\nOpcion 7\n\n");  
  
            default:  
                printf ("\nSeleccione una opcion correcta\n");  
            break;  
                      
        }  
    } while (opcion != 9);  
    return 0;  
}  
  
  
int IntroduceMatriz (int m[3][3], int f, int c) {  
    for (f=0; f<DIMENSION; f++) {  
        for (c=0; c<DIMENSION; c++) {  
            printf ("Introduce coordenada [%i][%i]: ",f,c);  
            scanf ("%i",&m[f][c]);  
        }   
    }  
      
    printf ("\nDone!\n");  
}  
  
int VisualizaMatriz (int m[3][3], int f, int c) {  
    for (f=0; f<DIMENSION; f++) {  
        for (c=0; c<DIMENSION; c++) {  
            printf ("%i  ",m[f][c]);  
        } printf ("\n");  
    }  
      
    printf ("\nDone!\n");  
}  
  
int RotarMatrizDrcha (int m[3][3], int f, int c) {  
    for (f=0; f<DIMENSION; f++) {  
        for (c=0; c<DIMENSION; c++) {  
            if (c == 2) {  
                n[f][0] = m[f][c];  
            } else {  
                n[f][c+1] = m [f][c];  
            }  
        }  
    }  
      
    for (f=0; f<DIMENSION; f++) {  
        for (c=0; c<DIMENSION; c++) {  
            m[f][c] = n[f][c];  
        }  
    }  
    printf ("\nDone!\n");         
}  
  
  
int CambiarFilasColumnas (int m[3][3], int f, int c) {  
    for (f=0; f<DIMENSION; f++) {  
        for (c=0; c<DIMENSION; c++) {  
            n[c][f] = m[f][c];  
        }  
    }  
      
    for (f=0; f<DIMENSION; f++) {  
        for (c=0; c<DIMENSION; c++) {  
            m[f][c] = n[f][c];  
        }  
    }  
    printf ("\nDone!\n");         
}  
  
  
int SumarFilasColumnas (int m[3][3], int f, int c) {  
      
    for (f=0; f<DIMENSION; f++) {  
        suma=0;  
        for (c=0; c<DIMENSION; c++) {  
            suma+=m[f][c];  
            //printf ("Debug: %i\n",suma);  
            if (c == 2) {  
                printf ("\nLa Fila [%i] suma: %i\n",f,suma);  
            }  
        }  
    }  
      
    printf ("\nDone!\n");         
}