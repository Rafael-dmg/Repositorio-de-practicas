#include <stdio.h>
#include <math.h>
#define P printf
#define S scanf


// int main ()
// {
//   int num, verificacion;

//   P("Ingresar un numero: \n");
//   S("%d", &num);

//   verificacion = num / 3;

//   if(verificacion == 0)
//     P("el numero es multiplo de 3");
//   else
//     P("El numero no es multiplo de 3");
// }

//  int main()
//  {
//      int anio, verificacion;

//    P("Ingresar un numero: \n");
//    S("%d", &anio);

//    verificacion = anio % 4;

//    if(verificacion == 0)
//      P("el año es biciesto");
//    else
//      P("El año no es biciesto");
//  }

int main () 
{
  int edad;

   P("Ingrese su edad: \n");
   S("%d", &edad);

  if(edad <=0 || edad >110)
    P("Ud no ha nacido o es un vampiro, los vampiros no son bienvenidos\n");

  else
    {
      if (edad >= 18)
      P("es mayor de edad\n");
      else
        P("No puedes entrar eres menor de edad");
    }
      return 0;
}
