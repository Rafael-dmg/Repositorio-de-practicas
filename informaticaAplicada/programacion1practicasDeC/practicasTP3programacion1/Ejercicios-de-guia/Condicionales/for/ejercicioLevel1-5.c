#include <stdio.h>

int num, mayor, menor, flag=0;


int main()
{
    /*si el usuario ingrsa un 0 el programa corta y solo muestra, 
    el mayor y el menor valor*/
   do
    {
        printf("ingrese un numero (Cero para salir)");
        scanf("%d", &num);


        if(flag==0)
        {
            flag=1;
            mayor=num; //la primera vez que entra se guarda el valor del usuario en estas variables para luego comparar  
            menor=num;
        }else
        {
            if(num<menor && num!=0)
                menor=num;
            else if (num>mayor && num!=0)
                mayor=num;
        }
    }while (num != 0);

    printf("Mayor: %d\n", mayor);
    printf("Menor: %d\n", menor);


    return 0; 
}