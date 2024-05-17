#include <stdio.h>

//falta una salida para el usuario usando 0 como opcion

int opcionUsuario, verificacion;

int main ()
{

    do
    {printf("Bienvenido al menu de ejercicios\n");
    printf("\t1 para ejercicios de Logica\n");
    printf("\t2 para ejercicios de Programacion\n");
    printf("\t3 para ejercicios de Algebra\n");
    printf("\t==Ingrese una opcion==\n");
    scanf("%d", &opcionUsuario);
    
    if (opcionUsuario<1 || opcionUsuario >3) {
        printf("Su numero ingresado fue: %d\n", opcionUsuario);

        printf("INTENTEMOSLO OTRA VEZ, INGRESE UNA OPCION VALIDA\n");
        printf("\n");
    }


    switch (opcionUsuario)
    {
        case 1:
            printf("Bienvenido al menu de ejercicios de Programacion");
        break;

        case 2:
            printf("Bienvenido al menu de ejercicios de Programacion\n");        
        break;

        case 3:
            printf("Bienvenido al menu de ejercicios de Algebra\n");        
        break;

        default:
        break;
    }
  
    }while(opcionUsuario != 1 && opcionUsuario != 2 && opcionUsuario != 3);





    return 0;

}