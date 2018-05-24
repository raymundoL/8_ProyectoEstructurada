/*----------------------------------------------------------------*/
/* Autor: Hernandez Cruz Raymundo Leon				  */
/* E-mail: rayadleon@gmail.com                                    */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion: 23/05/2018                                */
/* Descripcion: definicion de constantes, estructura y prototipo  */
/*              de funciones.                                     */
/*----------------------------------------------------------------*/

#ifndef PROTOTIPOFUNCIONES_H_
#define PROTOTIPOFUNCIONES_H_

#define TAM_NOM      50                    /* Definicion del tamanio del arreglo unidimensional */
#define TAM_CLA      30                    /* Tamanio de la matricula del alumno                */
#define TAM_CAR      30                    /* Tamanio de la fecha de nacimiento                 */
#define TAM_LO       30                      /* Tamanio total del alumno                          */
#define TAM_TIE      30                     /* Tamanio total del alumno                          */
#define TOTAL_UNIVERSIDIDADES    20        /* Tamanio total del alumno                          */



/* Se define una estructura para modelar los datos de una alumno. */
/* Los miembros de la estructura son:                             */
/*                                    - nombre                    */
/*                                    - clave                     */
/*                                    - carreras                  */
/*                                    - localizacion              */
/*                                    - tiempo                    */
/*                                    - edad                      */
typedef struct
{
	char nombre[TAM_NOM];
	char clave[TAM_CLA];
	char carrera[TAM_CAR];
	char localizacion[TAM_LO];
	char tiempo[TAM_TIE];
	int edad;

}Universidad;


/* Funciones que imprimen mensajes en pantalla */
void menuPrincipal(void);
void mostrarEncabezadoTabla(void);
void mostrarUniversidad(Universidad);
void detenerPantalla(void);


/* Funciones que realizan las operaciones sobre la lista de universidades */
Universidad crearNuevaUniversidad(void);
void mostrarListaUniversidad(Universidad [], int);
void buscarUniversidad(Universidad []);
void actualizarUniversidad(Universidad []);
void eliminarUniversidad(Universidad []);


/* Funcion que permite eliminar el alumno, es invocada por la funcion eliminarUniversidad() */
Universidad * eliminarUnaUniversidad(Universidad [], int);


/* Funciones que permiten ordenar los datos de la universidad */
int * ordenarAscendente(Universidad [], int []);
int * ordenarDescendente(Universidad [], int []);


#endif
