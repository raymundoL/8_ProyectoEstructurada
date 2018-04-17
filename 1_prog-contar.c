
/* Autor: Raymundo Leon Hernandez Cruz              */
/*E-mail: rayadleon@gmail.com                       */
/* fecha de creacion: 11/04/2018                    */
/*fecha de actualizacion:13/04/2018                 */
/* Descripcion: programa que permita encontrar las  */
/*              veces que se repite los números del */
/*              0 - 9 en un arreglo unidimensional  */
/*              dado.                               */



/* Declaracion de la biblioteca*/
#include <stdio.h>
/*Declaracion del tamaño del array*/
#define TAM 10

/*Declaracion de la funcion principal*/
 int main(void)
 {
  int array[TAM],i=0,c=0;
     printf("\t\t ---ESTE PROGRAMA SOLO IMPRIME DEL 0-9--\n");
      

for (i = 0; i < TAM; i++)
 {printf("ingrese el elemento [%d]\n",i+1 );
  scanf("%d",&array[i] );
  }
  

  for ( i = 0; i < TAM; i++)
  {
     
c=0;
   for(int j=0;j<TAM;j++){
  if(i==array[j]){
    
 c++;
  }
 
  }
    
    printf(" el numero ,%d se repite %d  \n", i,c);

}
return 0;
}
