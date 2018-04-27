/*Autor:Raymundo Leon Hernandez Cruz       */
/*E-mail:rayadleon@gmail.com               */
/*Fecha de creacion:24/04/2018             */
/*Fecha de modificacion:27/04/2018         */
/*Descripcion:generar valores aleatorios 
          de tipo flotante entre  0-1000   */

#include <stdio.h>
#include <stdlib.h>
/*Definicion de constantes*/
#define   ROW 3       /*numero de filas de la matriz]*/
#define   COL 3      /*Numero de columnas de la matriz*/
#define  MAX 1000   /*rango superior de los datos aleatorios*/
int main(void)
{
  int array[ROW][COL];
  /*inicializar el array con valores enteros aleatorios 0-1000*/
  for (int i = 0; i < ROW; i++) /*ciclo que controla las filas del array*/
   {

     for (int j = 0; j < COL; j++) /*ciclo que controla las  columnas del array*/
     {
        /*ASIGANACION DE DATOS AL ARRAY*/
        /*ulizar la funcion scanf para solicitar datos al usurio*/

        /*utilizar la funcion rand()para obtener datos de forma aleatoria*/
        /*la funcion se encuentra definida dentro de la biblioteca stdlib.h*/
        array[i][j]= rand()% (MAX+1);
                                                                                 /*TAREA: el dia viernes 27 de abril: generar valores aleatorios de tipo flotante entre  0-1000*/
     }
   }
   /* agregamos color con \x1b[color]*/
   printf("\x1b[32m Datos aleatorios  de la matriz : array[%d][%d]\n",ROW,COL );
    printf("\x1b[31m otro mensaje\n" );
    printf("\x1b[0m otro mensaje\n " );

    printf("{");
    for (int i = 0; i < ROW; i++) /*ciclo que controla las filas del array*/
     {
       printf("{");

       for (int j = 0; j < COL; j++) /*ciclo que controla las  columnas del array*/
       {

         printf("%d ",array[i][j]);
     }
          printf("}");
 }
     printf("}");
  return 0;

}
