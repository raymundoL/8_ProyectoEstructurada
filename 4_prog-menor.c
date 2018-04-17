/*Autor:Raymundo Leon Hernandez Cruz              */
/*E-mail:rayadleon@gmail.com                      */
/*Fecha de creacion :13/04/18                     */
/*Fecha de modificacion:14/04/18                  */
/*Descripcion: un programa para obtener el número */
/*             menor a partir de un arreglo       */
/*             unidimensional de enteros          */


/*declarando la biblioteca*/
#include <stdio.h>
/*implementacion del macro*/
#define TAM 10
/*declarando la fucion principal*/
int main(void)
{
  int arreglo[TAM]={7, 1, 4 , 5 , 6, 9 , 2, 3, 0,5};
  int menor= arreglo[0];
  for (int i = 0; i < TAM; i++)
  {
    if(menor > arreglo[i])

     menor=arreglo[i];

    }
    printf("el numero menor es %d\n", menor);
    return 0;
}
