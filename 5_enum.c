

/* Autor: Raymundo Leon Hernandez Cruz*/
/*E-mail: rayadleon@gmail.com        */
/*Fecha de creacion:21/04/2018        */
/*Fecha de modificacion:23/04/2018    */
/*Descripcion: imprimeindo el enum*/





#include <stdio.h>

/*declaracion de unum*/
/*tipo de indentificador{lista_de_identificadores};*/
/* tarea para el dia lunes:imprimir var1,var2,var3*/
enum DIAS{L,M,MI,J,V,S,D};
enum MESES{EN=1,FE,MAR,AB,MAY,JUN,JUL,AG,SE,OC,NO,DI};
enum FRUTAS{manzana,mango,durazno,pera,uva,pina};
enum PRECIOAUTO{NUEVO = 10,SEMINUEVO=-5,USADO,INSERVIBLE};
/*enumeracion anonima*/
enum {PROG,MATEDIS,MATII,TGS,ELECT} var1,var2,var3;
int main (void)
{
  printf("%d ",USADO );
  printf("%d ",var1 );
  printf("%d ",var2 );
  printf("%d ",var3 );
  printf("%d ",PROG );
  printf("%d ",MATII );


  for (enum MESES mes=EN; mes<=DI;mes++)
   {
    printf("%d \n",mes );
    switch (mes)
    {
      case EN: printf("\n Enero\n");
             break;
      case FE: printf("\n Octubre\n");
            break;
      case MAR: printf("\n Enero\n");
             break;
      case AB: printf("\n Octubre\n");
            break;
      case MAY: printf("\n Enero\n");
             break;
      case JUN: printf("\n Octubre\n");
            break;     
      case JUL: printf("\n Enero\n");
             break;
      case AG: printf("\n Octubre\n");
            break;         
      case SE: printf("\n Enero\n");
             break;
      case OC: printf("\n Octubre\n");
            break; 
      case NO: printf("\n Enero\n");
             break;
      case DI: printf("\n Octubre\n");
            break;                  
            
            
                 
    }
  }
  return 0;
}
