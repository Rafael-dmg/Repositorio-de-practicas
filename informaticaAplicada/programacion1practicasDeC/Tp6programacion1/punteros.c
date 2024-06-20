#include <stdio.h>
#define P printf
#define S scanf

int potencia (int, int, int*);

int main(void)
{

}

int potencia(int base, int exponente, int *resultado)
{
  P("Ingrese la base\n");
  S("%d", base);
  P("Ingrese el exponente\n");
  S("%d", exponente);

  *resultado = base * exponente;
}

//EJEMPLO DE EXPONENTE ↓↓↓

// #include <stdio.h>
// void potencia(int ,int ,int*);
// int main (void){
//     int base,elevado,resultado = 1;
//     int *ptr;
//     printf("Ingrese Base de la potencia: ");
//     scanf("%d",&base);
//     printf("Ingrese elevacion de la potencia: ");
//     scanf("%d",&elevado);
//     ptr=&resultado;
//     potencia(base,elevado,ptr);
//     printf("El resultado es %d",resultado);
//     return 0;
// }
// void potencia (int base,int elevado,int *res){
//     for (int i = 1; i <= elevado; i++)
//     {
//         *res *= base;
//     }    
// }

//EJEMPLO DE ABSOLUTO ↓↓↓

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <time.h>
// #define p printf
// #define s scanf

// void Abs(int,int*);

// int main()
// {
//     int num1;
//     int *ptr;
//     p("\nIngrese un valor: ");
//     s("%d",&num1);
//     ptr=&num1;
//     p("\nEl numero ingresado es: %d",num1);
//     Abs(num1,ptr);
//     p("\nSu valor absoluto es: %d",num1);
//     return 0;
// }

// void Abs(int num1,int *absoluto)
// {
//     if (num1<=0)
//         *absoluto=-num1;
//     else
//         *absoluto=num1;
// }

//RESOLUCION PROPIA DE EJERCICIO ↓↓↓

// #include <stdio.h>
// #define P printf
// #define S scanf

// int resultado (int numero, int *absoluto );

// int main(void)
// {
//   int numero = 0, absoluto;

//   resultado(numero, &absoluto);
// }

// int resultado(int numero, int *absoluto) 
// {
//   P("Ingrese un valor\n");
//   S("%d", &numero);

//   // if(numero >= 0)
//   //  *absoluto = numero;
//   //  else
//   //  *absoluto = numero + (numero * (-2));
  
//   *absoluto = (numero > 0) ? numero : numero + (numero * (-2));
//   P("El valor absoluto es: %d\n", *absoluto);

//   return 0;
// }

//EJEMPLO DE TERNARIO ↓↓↓

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <time.h>
// #define p printf
// #define s scanf

// void Abs(int,int*);

// int main()
// {
//     int num, res;

//     p("\nIngrese un valor: ");
//     s("%d",&num);

//     res = (num>=0)? 1 : 0; 
/*Aca podemos asignarle un valor a la variable directamente con un ternario en 
lugar de crear un if para la opcion de la asignacion */

//     /*
//     if(res)
//         p("Es positivo");
//     else
//         p("Es negativo");
//     */
    
//     (res)? p("Es positivo") : p("Es negativo");

//     return 0;
// }