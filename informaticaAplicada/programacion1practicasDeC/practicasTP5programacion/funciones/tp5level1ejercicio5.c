// #include <stdio.h>
// #include <string.h>
// #define P printf
// #define S scanf



// //vectores - funciones - while/dowhile
// /*llenar el vector de forma automatica y secuencial con los numeros primos hasta el enesimo numero
// Este enesimo numero debe ser indicado por el usuario*/
#include <stdio.h>


char minusc_a_mayusc (char c1) /*definición.de la función */
{
  char c2;
c2 = (c1 >= 'a' && c1 <= 'z') ? ('A' + c1 -'a' ) :c1;
 return (c2) ;
}


int main ()
{
  char minusc, mayusc;
printf ("Por favor, introduce una letra minúscula: ") ;
scanf ("%c", &minusc) ;
mayusc = minusc_a_mayusc(minusc);
printf("\nLa mayúscula equivalente es %c\n\n", mayusc);
}