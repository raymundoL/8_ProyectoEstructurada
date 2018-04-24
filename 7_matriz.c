/* Autor: Raymundo Leon Hernandez Cruz */
/*E-mail: rayadleon@gmail.com          */
/*Fecha de creacion:21/04/2018         */
/*Fecha de modificacion:23/04/2018     */
/*Descripcion: declarando las matrices
                de rectangulo,cuadrado
                y columna              */



/*Declaracion de biblioteca*/

#include<stdio.h>

/*declaracion de la funcion principal*/
int main(void)
{
        int matrizc[3][3]={{1,2,3},{4,5,6},{2,3,9}};                    /*declaracion de la matriz cuadrado*/
        int matrizr[3][5]={{2,3,4,5,6,},{9,9,7,6,4},{2,3,9,3,2}};      /*declarando la matriz reactangular*/
        int matrizco[3][1]={{1},{4},{2}};                              /*declarando la matriz columna*/
int f,c;
             printf("\t matriz cuadrado\n" );
         /*ciclo for de la matriz cuadrada*/
        for(f=0;f<3;f++)
         {                                             
            for(c=0;c<3;c++)
            {
              printf("%d \n",matrizc[f][c]);

          }
        }
        printf("\t matriz reactangular\n" );
         /*ciclo for de la matriz reactangular*/
        for(f=0;f<3;f++)
         {
            for(c=0;c<5;c++)
            {
              printf("%d \n",matrizr[f][c]);
          }
        }
           printf("\t matriz columna\n" );
         /*ciclo for de la matriz columna*/
        for(f=0;f<3;f++)
         {
            for(c=0;c<1;c++)
            {
              printf("%d \n",matrizco[f][c]);
          }
        }



return 0;
}
