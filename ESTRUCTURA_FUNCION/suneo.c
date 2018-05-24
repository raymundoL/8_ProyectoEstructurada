/*----------------------------------------------------------------*/
/* Autor: Hernandez Cruz Raymundo Leon				  */
/* E-mail: rayadleon@gmail.com                                    */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion: 23/05/2018                                */
/* Descripcion: programa para ejemplificar archivos .h y .c       */
/*----------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "colores.h"                   /* En este archivo se definen las secuencia para los colores            */
#include "enums.h"                     /* En este archivo se definen los enums para los menus                 */
#include "prototipofunciones.h"        /* En este archivo se definen todos los prototipos de funciones        */

                                  

int numUniversidades;

int main(void)
{
  Universidad listaUniversidad[TOTAL_UNIVERSIDIDADES];    /* Declaracion de una variable de arreglo de estructura universidad[]       */
	int opcion;

	do{
    menuPrincipal();                   /*  invoca a la funcion menuPrincipal() implementada en      */


		printf(_TCYAN _NEGRITA "\n\nSeleccione una opcion: ");
		scanf("%d", &opcion);

		switch(opcion)
		{
			case CREAR:
              while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
              printf(_TCYAN     _NEGRITA "\n\n1. A L T A     D E     U N I V E R S I D A D E S\n\n");

              printf(_TAMARILLO _NEGRITA "\n\nIntroduce el numero de universidades del suneo: " _TVERDE);
							scanf("%d",&numUniversidades);
							printf("\n\n" _ARESET);

							for(int i = 0; i < numUniversidades; i++)
							{
                while(getchar() != '\n');              /* Limpiar el buffer en caso de tener almacenado el salgo de linea                */
                listaUniversidad[i] = crearNuevaUniversidad();   /* Se invoca a la funcion crearNuevoAlumno() implementada en operacionesUniversidad.c  */
              }
              while(getchar() != '\n');
						  detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case LISTAR:
              while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TCYAN _NEGRITA "\n\n2. L I S T A     D E    U N I V E R S ID A D  E S\n\n");
              mostrarListaUniversidad(listaUniversidad, 0);      /* Se invoca a la funcion mostrarAlumno() implementada en operacionesUniversidad.c     */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case LISTAR_ASC:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. L I S T A R    A S C E D E N T E\n\n");
              mostrarListaUniversidad(listaUniversidad, 1);      /* Se invoca a la funcion mostrarAlumno() implementada en operacionesUniversidad.c     */
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case LISTAR_DES:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. L I S T A R    D E S C E D E N T E\n\n");
              mostrarListaUniversidad(listaUniversidad, 2);      /* invoca a la funcion mostrarAlumno() implementada en operacionesUniversidad.c     */
							detenerPantalla();                       /*  invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case BUSCAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
						  
              buscarUniversidad(listaUniversidad);               /* Se invoca a la funcion buscarAlumno() implementada en operacionesUniversidad.c      */
						  detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case ACTUALIZAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. A C T U A L I Z A R\n\n");
              actualizarUniversidad(listaUniversidad);
              while(getchar() != '\n');
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case ELIMINAR:
							while(getchar() != '\n');                /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							printf(_TAMARILLO _NEGRITA "\n\n3. E L I M I N A R\n\n");
              eliminarUniversidad(listaUniversidad);
							detenerPantalla();                       /* Se invoca a la funcion detenerPantalla() implementada en operacionespantalla.c */
							break;

			case SALIR:
							system("clear");                         /* limpia la pantalla */
							exit(0);
		}
	}while(opcion != SALIR);

	return 0;
}
