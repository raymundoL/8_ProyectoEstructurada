/*----------------------------------------------------------------*/
/* Autor: Hernandez Cruz Raymundo Leon				  */
/* E-mail: rayadleon@gmail.com                                    */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion: 23/2018                                  */
/* Descripcion: implementacion de funciones que muestran datos en */
/*              pantalla.                                         */
/*----------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

#include "colores.h"
#include "prototipofunciones.h"

void menuPrincipal(void)
{
  system("clear");  /* Limpia toda la pantalla.           */
  puts("");         /* Haciendo salto de lina con puts(). */

  printf( _TCYAN  _NEGRITA _SUBRAYADO "\t\tS I S T E M A     D E    C O N T R O L    D E   L A S  U N I V E R S I D A D E S   D E L   S U N E O\n" _ARESET);
 printf("\n\n" );
  printf(_TMORADO _NEGRITA "\nM E N U    P R I N C I P A L\n");

  printf(_TAMARILLO _NEGRITA "\n\t1. Alta de universidades");
  printf(_TAMARILLO _NEGRITA "\n\t2. Lista de universidades");
  printf(_TAMARILLO _NEGRITA "\n\t3. Lista de universidades Acendente");
  printf(_TAMARILLO _NEGRITA "\n\t4. Lista de universidades Descendente");
  printf(_TAMARILLO _NEGRITA "\n\t5. Buscar universidades");
  printf(_TAMARILLO _NEGRITA "\n\t6. Actualizar universidades");
  printf(_TAMARILLO _NEGRITA "\n\t7. Eliminar universidades");
  printf(_TAMARILLO _NEGRITA "\n\t8. Salir");
}

void mostrarEncabezadoTabla(void){
  printf(_TROJO     _NEGRITA);
  printf("%-40s|%-12s|%-18s|%-18s|%-15s|", "NOMBRE", "CLAVE", "CARRERA","LOCALIZACION",  "TIEMPO");
  printf("\n------------------------------------------------------------------------------------------------------------\n");
}

void mostrarUniversidad(Universidad univerdidad)
{
  printf(_TBLANCO _NEGRITA);
  printf("%-40s|%-12s|%-18s|%-18s|%-18s|", univerdidad.nombre, univerdidad.clave, univerdidad.carrera, univerdidad.localizacion,univerdidad.tiempo);
}

void detenerPantalla(void)
{
  char c;                           /* Lee un caracter y valida el salto de linea para salir de la opcion. */
  printf(_TAMARILLO _NEGRITA "\n\nPresiones Enter para salir: ");
  while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
  {}
}
