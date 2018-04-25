/*Autor:Raymundo Leon Hernandez Cruz         */
/*E-mail: rayadleon@gmail.com                */
/*Fecha de creacion : 24/04/2018             */
/*Fecha de modificacion: 25/04/2018          */
/*Descripcion: convertir de decimal a binario*/

#include <stdio.h>
#define TAM 10

int main(void)
{
  int num, i;
  int array[TAM];
  printf("ingrese un numero decimal\n");
  scanf("%d",&num );
   i=0;
     if(num==0)
     {
        printf("%d",num );
     }else
     while(num>0)
     {
       array[i]=num%2;
       num/=2;
       i++;

     }
     for (int j = i-1; j >=0 ; j--) {
              printf("%d ",array[j] );
            }
            printf("\n" );

}
