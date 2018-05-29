
/*Autor:Hernandez Cruz Raymundo Leon                */
/*E_mail:rayadleon@gmail.com                        */
/*fecha de creacion: 26/05/18                       */
/*Fecha de modicaficacion:28/05/18                  */
/*Descripcion:Conversion de numeros decimales a
     binarios usando la recursividad                */


#include <stdio.h>

int n;
//Declarando la funcion

void Dec_Bin(int);
//Declarando la funcion principal
int main(void)
{
  printf("introduzca un numero\n" );
  scanf("%d",&n );

  Dec_Bin(num);
  return 0;
}
//invocando la funcion Dec_Bin
void Dec_Bin(int num)
{
  int aux;
  if(n==0)  //el caso base del problema
  {
    return;
  }else
  { // el caso recurcivo del problema
  aux=n%2;
  n=n/2;

  Dec_Bin(n);
  printf("%d",aux );
  }
}
