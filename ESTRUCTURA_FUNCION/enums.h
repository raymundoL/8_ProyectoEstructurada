/*----------------------------------------------------------------*/
/* Autor: Hernandez Cruz Raymundo Leon				  */
/* E-mail: rayadleon@gmail.com                                    */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion: 23/05/2018                                */
/* Descripcion: definicion de las variables enum.                 */
/*----------------------------------------------------------------*/

#ifndef ENUMS_H_
#define ENUMS_H_

/* Declaracion de enumeraciones para el control de menu de opciones:                */
enum OPCIONES_MENU{CREAR = 1,
									 LISTAR,
									 LISTAR_ASC,
                   LISTAR_DES,
                   BUSCAR,
                   ACTUALIZAR,
                   ELIMINAR,
                   SALIR};


/* Declaracion de enumeracion para el manejo de los casos: */

enum OPCIONES_BUSCAR_ACTUALIZAR_ELIMINAR{_xnombre=1,
                                        _xclave};

#endif
