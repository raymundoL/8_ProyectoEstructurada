/*AUTOR:Raymundo Leon Hernandez Cruz--------------*/
/*E-MAIL:rayadleon@gmail.com ---------------------*/
/*Fecha de creacion :13/04/18---------------------*/
/*Fecha de modificacion:14/04/18------------------*/
/*Descripcion: ordenando un arreglo utilizando el
metodo de la burbuja ------*/


 
/*declarando labiblioteca*/

#include <stdio.h>

int main(void)
{
  int array[]={2,0,2,3,10,11,4,100,9};
  for (int i = 0; i < 9; i++)
   {
   for ( int j = i+1; j <9; j++)
   {
     if(array[i]>array[j])
     {
       int aux=array[j];
       array[j]=array[i];
       array[i]=aux;
     }

   }
   printf("%d ",array[i] );
  }
}
