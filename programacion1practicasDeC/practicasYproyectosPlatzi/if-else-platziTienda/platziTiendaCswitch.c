#include <stdio.h>
int optMenu, optBebidas, optComidas, optMerch;

int main()
{
    printf("bienvenid a platzi store :\n");
    printf("opcion 0 para platzi bebidas \n");
    printf("opcion 1 para platzi comidas \n");
    printf("opcion 2 para platzi merchandising \n");
    scanf("%d", &optMenu);

  if(optMenu < 0 || optMenu > 2)
  {
      printf("Por favor elije una opcion valida \n");
      return 1;
  } 

    switch (optMenu){

        case 0:
            printf("usted eligio la opcion 0, vera nuestro menu de bebidas elija una:\n");
            printf("opcion 0 para platzi cola cero \n");
            printf("opcion 1 para platzi cola normal \n");
            printf("opcion 2 para platzi pina colada \n");
            scanf("%d", &optBebidas);

            if(optBebidas < 0 || optBebidas > 2)
            {
                printf("Por favor elije una opcion valida \n");
                return 1;
            } 

            switch (optBebidas)
            {
              case 0:
                  printf("usted eligio una platzi cola cero \n");
                  break;
              case 1:
                  printf("usted eligio una platzi cola normal \n");
                  break;
              case 2:
                  printf("usted eligio una platzi pina colada \n");
                  break;
                  
                default: printf("Aun no elegiste tu bebida\n");
            }
          
          

        case 1:
            printf("usted eligio la opcion 1, vera nuestro menu de comidas elija una:\n");
            printf("opcion 0 para platzi pasta \n");
            printf("opcion 1 para platzi pollo \n");
            printf("opcion 2 para platzi ramen \n");
            scanf("%d", &optComidas);

            if(optComidas < 0 || optComidas > 2)
            {
                printf("Por favor elije una opcion valida \n");
                return 1;
            } 

            switch (optComidas)
            {
              case 0:
                  printf("usted eligio una platzi pasta, que lo disfrute \n");
                  break;
              case 1:
                  printf("usted eligio una platzi pollo, que lo disfrute \n");

                  break;
              case 2:
                  printf("usted eligio una platzi ramen, que lo disfrute \n");
                  break;
                  
                default: printf("Aun no elegiste tu comida\n");
            }
            
        case 2: 
            printf("usted eligio la opcion 2, vera nuestro catalogo de merchandising:\n");
            printf("opcion 0 para platzi remera \n");
            printf("opcion 1 para platzi campera \n");
            printf("opcion 2 para platzi buzo \n");
            scanf("%d", &optMerch);

            if(optMerch < 0 || optMerch > 2)
            {
                printf("Por favor elije una opcion valida \n");
                return 1;
            } 


            switch (optMerch)
              {
                case 0:
                    printf("usted eligio una platzi remera \n");
                    break;
                case 1:
                    printf("usted eligio una platzi campera\n");
                    break;
                case 2:
                    printf("usted eligio un platzi buzo\n");
                    break;
                    
                  default: printf("Aun no elegiste tu compra\n");
              }
            }
              return 0;
    }



/*
switch 
{
  case 0:
      printf("\n");
      break;
  case 1:
      printf("\n");
      break;
  case 2:
      printf("\n");
      break;
      
    default: printf("Aun no elegiste tu bebida\n");
}
*/