/*----------------------------------------------------------------*/
/* Autor: Hernandez Cruz Raymundo Leon				  */
/* E-mail: rayadleon@gmail.com                                    */
/* Fecha creacion: 22/05/2018                                     */
/* Fecha actualizacion: 23/05/2018                                */
/* Descripcion: implementacion de funciones sobre la estructura   */
/*              alumno: crear, listar, ordenar, buscar,           */
/*              actualizar y eliminar.                            */
/*----------------------------------------------------------------*/

#include <stdio.h>
#include <string.h>

/* Se incluyen los archivos necesarios */
#include "colores.h"
#include "prototipofunciones.h"
#include "enums.h"

/* Variable global inicializada en principal.c */
extern int numUniversidades;



Universidad crearNuevaUniversidad(void)
{
  Universidad univerdidad;

  printf(_TBLANCO _NEGRITA "Introduzca el nombre de la universidad: "              _NNEGRITA _TVERDE);
  fgets(univerdidad.nombre, TAM_NOM, stdin);                                       /* Solicita el nombre de la univerdidad usuario          */
  strcpy(univerdidad.nombre, strtok(univerdidad.nombre, "\n"));							     	    /* Elimina el salto de linea '\n' que genera fgets() */

  printf(_TBLANCO _NEGRITA "Introduzca la clave de la universidad: "                 _NNEGRITA _TVERDE);
  fgets(univerdidad.clave, TAM_CLA, stdin);                                          /* Solicita la  clave de la universidad al usuario        */
  strcpy(univerdidad.clave, strtok(univerdidad.clave, "\n"));                       /* Elimina el salto de linea '\n' que genera fgets() */

  printf(_TBLANCO _NEGRITA "Introduzca la carrera que ofrece la universidad: "        _NNEGRITA _TVERDE);
  fgets(univerdidad.carrera, TAM_CAR, stdin);                                            /* Solicita las carreras que ofrece la univerdidad al usuario        */
  strcpy(univerdidad.carrera, strtok(univerdidad.carrera, "\n"));                               /*Elimina el salto de linea '\n' que genera fgets    */

  printf(_TBLANCO _NEGRITA "Introduzca la localizacion de la universidad: "        _NNEGRITA _TVERDE);
  fgets(univerdidad.localizacion, TAM_LO, stdin);                                            /* Solicita la localizacion al usuario        */
  strcpy(univerdidad.localizacion, strtok(univerdidad.localizacion, "\n"));

  printf(_TBLANCO _NEGRITA "Introduzca el tiempo que trabaja la universidad: "        _NNEGRITA _TVERDE);
  fgets(univerdidad.tiempo, TAM_TIE, stdin);                                            /* Solicita el tiempo de trabajo al usuario        */
  strcpy(univerdidad.tiempo, strtok(univerdidad.tiempo, "\n"));


  while(getchar() != '\n'); /* Limpiar el buffer en caso de tener almacenado el algo de linea */



  return univerdidad;
}




void mostrarListaUniversidad(Universidad listaUniversidad[], int ordenar)
{
  int arrayTemp[numUniversidades];
  for(int i = 0; i < numUniversidades; i++)
  {
    arrayTemp[i] = i;
  }
  if(ordenar == 1)            /* 1: ordenacion ascendente  */
  {
    memcpy(arrayTemp, ordenarAscendente(listaUniversidad, arrayTemp), sizeof(arrayTemp));   /* memcpy: permite compiar un arreglo a otro */
  } else if(ordenar == 2){    /* 2: ordenacion descendente */
    memcpy(arrayTemp, ordenarDescendente(listaUniversidad, arrayTemp), sizeof(arrayTemp));  /* memcpy: permite compiar un arreglo a otro */
  }
  mostrarEncabezadoTabla();
  for(int i = 0; i < numUniversidades; i++)
  {
    mostrarUniversidad(listaUniversidad[arrayTemp[i]]);
    printf("\n");
  }
}



void buscarUniversidad(Universidad listaUniversidad[])
{
  int opcionBuscar;
  char nombreBuscar[TAM_NOM];            /* Almacena el nombre a buscar dentro de la estructura                */
  char claveBuscar[TAM_CLA];         /* Almacena la CLAVE a buscar dentro de la estructura             */
  char carreraBuscar[TAM_CAR];         /* Almacena la CARRERA a buscar dentro de la estructura             */
  char localizacionBuscar[TAM_LO];         /* Almacena la LOCALIZACION a buscar dentro de la estructura             */
  char tiempoBuscar[TAM_TIE];         /* Almacena el TIEMPO a buscar dentro de la estructura             */


  printf(_TAMARILLO _NEGRITA "\n\n3. B U S C A R\n\n");
  printf(_TCYAN     _NEGRITA "Buscar univerdidad por:\n\n");
  printf(_TBLANCO   _NEGRITA "\t1. Nombre\n\n");
  printf(_TBLANCO   _NEGRITA "\t2. Clave\n\n");
  printf(_TBLANCO   _NEGRITA "\t3. Carrera\n\n");
  printf(_TBLANCO   _NEGRITA "\t4. Localizacion\n\n");
  printf(_TBLANCO   _NEGRITA "\t5. Tiempo\n\n");


  printf(_TCYAN     _NEGRITA "Introduzca una opcion: ");
  scanf("%d", &opcionBuscar);

  switch(opcionBuscar)
  {
    case 1:
        while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

        printf(_TCYAN _NEGRITA "\n\nIngrese el nombre de la universidad: ");
        fgets(nombreBuscar, TAM_NOM, stdin);
        strcpy(nombreBuscar, strtok(nombreBuscar, "\n"));

        for(int i = 0; i < numUniversidades; i++)
            if(strcmp(nombreBuscar, listaUniversidad[i].nombre) == 0)
            {
                mostrarEncabezadoTabla();
                mostrarUniversidad(listaUniversidad[i]);
            }
            break;

      case 2:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduzca la clave de la univerdidad: ");
          fgets(claveBuscar, TAM_CLA, stdin);
          strcpy(claveBuscar, strtok(claveBuscar, "\n"));

          for(int i = 0; i < numUniversidades; i++)
          if(strcmp(claveBuscar, listaUniversidad[i].clave) == 0)
          {
            mostrarEncabezadoTabla();
            mostrarUniversidad(listaUniversidad[i]);
          }
          break;
      case 3:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduzca la carrera que ofrece la univerdidad: ");
          fgets(carreraBuscar, TAM_CAR, stdin);
          strcpy(carreraBuscar, strtok(carreraBuscar, "\n"));

          for(int i = 0; i < numUniversidades; i++)
          if(strcmp(carreraBuscar, listaUniversidad[i].carrera) == 0)
              {
                mostrarEncabezadoTabla();
                mostrarUniversidad(listaUniversidad[i]);
              }
          break;

      case 4:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduzca la localizacion de la univerdidad: ");
          fgets(localizacionBuscar, TAM_LO, stdin);
          strcpy(localizacionBuscar, strtok(localizacionBuscar, "\n"));

          for(int i = 0; i < numUniversidades; i++)
          if(strcmp(localizacionBuscar, listaUniversidad[i].localizacion) == 0)
              {
                mostrarEncabezadoTabla();
                mostrarUniversidad(listaUniversidad[i]);
              }
          break;

       case 5:
           while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

           printf(_TCYAN _NEGRITA "\n\nIntroduzca el tiempo en que trabaja  la univerdidad: ");
           fgets(tiempoBuscar, TAM_TIE, stdin);
           strcpy(tiempoBuscar, strtok(tiempoBuscar, "\n"));

          for(int i = 0; i < numUniversidades; i++)
            if(strcmp(tiempoBuscar, listaUniversidad[i].tiempo) == 0)
              {
                mostrarEncabezadoTabla();
                mostrarUniversidad(listaUniversidad[i]);
              }
          break;
  }
}



void actualizarUniversidad(Universidad listaUniversidad[])
{
  int opcionBuscar;
  char nombreBuscar[TAM_NOM];            /* Almacena el nombre a buscar dentro de la estructura                */
  char claveBuscar[TAM_CLA];         /* Almacena la CLAVE a buscar dentro de la estructura             */
  char carreraBuscar[TAM_CAR];         /* Almacena la CARRERA a buscar dentro de la estructura             */
  char localizacionBuscar[TAM_LO];         /* Almacena la LOCALIZACION a buscar dentro de la estructura             */
  char tiempoBuscar[TAM_TIE];         /* Almacena el TIEMPO a buscar dentro de la estructura             */

  printf(_TCYAN     _NEGRITA "Buscar la univerdidad por:\n\n");
  printf(_TBLANCO   _NEGRITA "\t1. Nombre\n\n");
  printf(_TBLANCO   _NEGRITA "\t2. clave \n\n");
  printf(_TBLANCO   _NEGRITA "\t3. Carrera\n\n");
  printf(_TBLANCO   _NEGRITA "\t4. Localizacion\n\n");
  printf(_TBLANCO   _NEGRITA "\t5. Tiempo\n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &opcionBuscar);

  switch(opcionBuscar)
  {
      case 1:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduzca el nombre: ");
          fgets(nombreBuscar, TAM_NOM, stdin);
          strcpy(nombreBuscar, strtok(nombreBuscar, "\n"));

          for(int i = 0; i < numUniversidades; i++)
          {
              if(strcmp(nombreBuscar, listaUniversidad[i].nombre) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarUniversidad(listaUniversidad[i]);

                  printf("\n\n");

                  listaUniversidad[i] = crearNuevaUniversidad();

                  mostrarEncabezadoTabla();
                  mostrarUniversidad(listaUniversidad[i]);

                  break;
              }
          }
          break;

      case 2:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduzca la clave de la univerdidad: ");
          fgets(claveBuscar, TAM_CLA, stdin);
          strcpy(claveBuscar, strtok(claveBuscar, "\n"));

          for(int i = 0; i < numUniversidades; i++)
          {
              if(strcmp(claveBuscar, listaUniversidad[i].clave) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarUniversidad(listaUniversidad[i]);

                  printf("\n\n");

                  listaUniversidad[i] = crearNuevaUniversidad();

                  mostrarEncabezadoTabla();
                  mostrarUniversidad(listaUniversidad[i]);

                  break;
              }
          }

           break;
        case 3:
            while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

            printf(_TCYAN _NEGRITA "\n\nIntroduzca la carrera que ofrece la univerdidad: ");
            fgets(carreraBuscar, TAM_CAR, stdin);
            strcpy(carreraBuscar, strtok(carreraBuscar, "\n"));

            for(int i = 0; i < numUniversidades; i++)
            {
                if(strcmp(claveBuscar, listaUniversidad[i].carrera) == 0)
                {
                    mostrarEncabezadoTabla();
                    mostrarUniversidad(listaUniversidad[i]);

                    printf("\n\n");

                    listaUniversidad[i] = crearNuevaUniversidad();

                    mostrarEncabezadoTabla();
                    mostrarUniversidad(listaUniversidad[i]);

                    break;
                }
            }

           break;

      case 4:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduzca la localizacion de la univerdidad: ");
          fgets(localizacionBuscar, TAM_LO, stdin);
          strcpy(localizacionBuscar, strtok(localizacionBuscar, "\n"));

          for(int i = 0; i < numUniversidades; i++)
          {
              if(strcmp(localizacionBuscar, listaUniversidad[i].localizacion) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarUniversidad(listaUniversidad[i]);

                  printf("\n\n");

                  listaUniversidad[i] = crearNuevaUniversidad();

                  mostrarEncabezadoTabla();
                  mostrarUniversidad(listaUniversidad[i]);

                  break;
              }
          }

           break;
     case 5:
         while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

         printf(_TCYAN _NEGRITA "\n\nIntroduzca el tiempo que trabaja la univerdidad: ");
         fgets(tiempoBuscar, TAM_TIE, stdin);
         strcpy(tiempoBuscar, strtok(tiempoBuscar, "\n"));

         for(int i = 0; i < numUniversidades; i++)
         {
             if(strcmp(tiempoBuscar, listaUniversidad[i].tiempo) == 0)
             {
                 mostrarEncabezadoTabla();
                 mostrarUniversidad(listaUniversidad[i]);

                 printf("\n\n");

                 listaUniversidad[i] = crearNuevaUniversidad();

                 mostrarEncabezadoTabla();
                 mostrarUniversidad(listaUniversidad[i]);

                 break;
             }
         }

         break;

  }
}



void eliminarUniversidad(Universidad listaUniversidad[])
{
  int opcionBuscar;
  char nombreBuscar[TAM_NOM];            /* Almacena el nombre a buscar dentro de la estructura                */
  char claveBuscar[TAM_CLA];         /* Almacena la CLAVE a buscar dentro de la estructura             */
  char carreraBuscar[TAM_CAR];         /* Almacena la CARRERA a buscar dentro de la estructura             */
  char localizacionBuscar[TAM_LO];         /* Almacena la LOCALIZACION a buscar dentro de la estructura             */
  char tiempoBuscar[TAM_TIE];         /* Almacena el TIEMPO a buscar dentro de la estructura             */

  printf(_TCYAN     _NEGRITA "Eliminar universidad por:\n\n");
  printf(_TBLANCO   _NEGRITA "\t1. Nombre\n\n");
  printf(_TBLANCO   _NEGRITA "\t2. clave \n\n");
  printf(_TBLANCO   _NEGRITA "\t3. Carrera\n\n");
  printf(_TBLANCO   _NEGRITA "\t4. Localizacion\n\n");
  printf(_TBLANCO   _NEGRITA "\t5. Tiempo\n\n");

  printf(_TCYAN     _NEGRITA "Introduce una opcion: ");
  scanf("%d", &opcionBuscar);

  switch(opcionBuscar)
  {
      case 1:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduzca el nombre de la univerdidad: ");
          fgets(nombreBuscar, TAM_NOM, stdin);
          strcpy(nombreBuscar, strtok(nombreBuscar, "\n"));

          for(int i = 0; i < numUniversidades; i++)
          {
              if(strcmp(nombreBuscar, listaUniversidad[i].nombre) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarUniversidad(listaUniversidad[i]);

                  printf("\n\n");

                  printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "                _NNEGRITA _TVERDE);

                  char opcionEliminar;
                  while((opcionEliminar = getchar()) == 's')
                  {
                    printf("\nSizeof: %lu\n", sizeof(* listaUniversidad));
                    listaUniversidad = eliminarUnaUniversidad(listaUniversidad, i);
                  }

                  printf("\n\n");
                  break;
              }
          }
          break;

      case 2:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduzca la clave de la univerdidad: ");
          fgets(claveBuscar, TAM_CLA, stdin);
          strcpy(claveBuscar, strtok(claveBuscar, "\n"));

          for(int i = 0; i < numUniversidades; i++)
          {
              if(strcmp(claveBuscar, listaUniversidad[i].clave) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarUniversidad(listaUniversidad[i]);

                  printf("\n\n");

                  printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "                _NNEGRITA _TVERDE);

                  char opcionEliminar;
                  while((opcionEliminar = getchar()) == 's')
                  {
                      listaUniversidad = eliminarUnaUniversidad(listaUniversidad, i);
                  }

                  printf("\n\n");
                  break;
              }
            }

      case 3:
          while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

          printf(_TCYAN _NEGRITA "\n\nIntroduzca las carreras que ofrece la univerdidad: ");
          fgets(carreraBuscar, TAM_CAR, stdin);
          strcpy(carreraBuscar, strtok(carreraBuscar, "\n"));

          for(int i = 0; i < numUniversidades; i++)
          {
              if(strcmp(carreraBuscar, listaUniversidad[i].carrera) == 0)
              {
                  mostrarEncabezadoTabla();
                  mostrarUniversidad(listaUniversidad[i]);

                  printf("\n\n");

                  printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "                _NNEGRITA _TVERDE);

                  char opcionEliminar;
                  while((opcionEliminar = getchar()) == 's')
                  {
                      listaUniversidad = eliminarUnaUniversidad(listaUniversidad, i);
                  }

                  printf("\n\n");
                  break;
              }
          }
    case 4:
        while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

        printf(_TCYAN _NEGRITA "\n\nIntroduzca la localizacion de la univerdidad: ");
        fgets(localizacionBuscar, TAM_LO, stdin);
        strcpy(localizacionBuscar, strtok(localizacionBuscar, "\n"));

        for(int i = 0; i < numUniversidades; i++)
        {
            if(strcmp(localizacionBuscar, listaUniversidad[i].localizacion) == 0)
            {
                mostrarEncabezadoTabla();
                mostrarUniversidad(listaUniversidad[i]);

                printf("\n\n");

                printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "                _NNEGRITA _TVERDE);

                char opcionEliminar;
                while((opcionEliminar = getchar()) == 's')
                {
                    listaUniversidad = eliminarUnaUniversidad(listaUniversidad, i);
                }

                printf("\n\n");
                break;
            }
        }

   case 5:
       while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

       printf(_TCYAN _NEGRITA "\n\nIntroduzca el tiempo que trabaja la univerdidad: ");
       fgets(tiempoBuscar, TAM_TIE, stdin);
       strcpy(tiempoBuscar, strtok(tiempoBuscar, "\n"));

       for(int i = 0; i < numUniversidades; i++)
       {
           if(strcmp(tiempoBuscar, listaUniversidad[i].tiempo) == 0)
           {
               mostrarEncabezadoTabla();
               mostrarUniversidad(listaUniversidad[i]);

               printf("\n\n");

               printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "                _NNEGRITA _TVERDE);

               char opcionEliminar;
               while((opcionEliminar = getchar()) == 's')
               {
                   listaUniversidad = eliminarUnaUniversidad(listaUniversidad, i);
               }

               printf("\n\n");
               break;
           }
       }
  }
}



Universidad * eliminarUnaUniversidad(Universidad listaUniversidad[], int posicion)
{
  if(posicion < (numUniversidades - 1))
  {
    for(int j = posicion; j < numUniversidades-1; j++)
    {
      strcpy(listaUniversidad[j].nombre,          listaUniversidad[j+1].nombre);
      strcpy(listaUniversidad[j].clave,       listaUniversidad[j+1].clave);
      strcpy(listaUniversidad[j].carrera, listaUniversidad[j+1].carrera);
      strcpy(listaUniversidad[j].localizacion, listaUniversidad[j+1].localizacion);
      strcpy(listaUniversidad[j].tiempo, listaUniversidad[j+1].tiempo);

    }
  }

  strcpy(listaUniversidad[numUniversidades-1].nombre,"");
  strcpy(listaUniversidad[numUniversidades-1].clave,"");
  strcpy(listaUniversidad[numUniversidades-1].carrera,"");
  strcpy(listaUniversidad[numUniversidades-1].localizacion,"");
  strcpy(listaUniversidad[numUniversidades-1].tiempo,"");


  numUniversidades--;

  printf("\n\nEl registro se ha eliminado exitosamente.\n\n");

  return listaUniversidad;
}
