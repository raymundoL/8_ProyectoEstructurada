/*----------------------------------------------------------------*/
/* Autor: Hernandez Cruz Raymundo Leon				  */
/* E-mail: rayadleon@gmail.com                                    */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion: 23/05/2018                                */
/* Descripcion: implementacion de las funciones de ordenacion.    */
/*----------------------------------------------------------------*/

#include <string.h>
#include "prototipofunciones.h"

extern int numUniversidades;

int * ordenarAscendente(Universidad listaUniversidad[], int arrayTemp[])
{
  for(int i = 0; i < numUniversidades; i++)
  {
    for(int j = i + 1; j < numUniversidades; j++)
    {
      if(strcmp(listaUniversidad[arrayTemp[i]].nombre, listaUniversidad[arrayTemp[j]].nombre) > 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}



int * ordenarDescendente(Universidad listaUniversidad[], int arrayTemp[])
{
  for(int i = 0; i < numUniversidades; i++)
  {
    for(int j = i + 1; j < numUniversidades; j++)
    {
      if(strcmp(listaUniversidad[arrayTemp[i]].nombre, listaUniversidad[arrayTemp[j]].nombre) < 0)
      {
        int aux = arrayTemp[i];
        arrayTemp[i] = arrayTemp[j];
        arrayTemp[j] = aux;
      }
    }
  }
  return arrayTemp;
}
