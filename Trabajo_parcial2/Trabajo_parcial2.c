/*autores: Leonardo Arellanes Arellanes.                                  */
/*         Irving Efren Garcia Ramos.                                     */
/*         Raymundo Leon Hernandez Cruz.                                  */
/*         Edgar Alejandro Hernandez Hernandez.                           */
/*         Maria Emilia Palomec Reyes.                                    */
/*Fecha de creacion: 29-04-2018.                                          */
/*Fecha de actualizacion:10-05-2018.                                      */
/*Descripcion:programa que ingresa  datos a una tienda de tenis           */




/*Declaración de las bibliotecas*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define _RESET        "\x1b[0m"     /* Resetear el color.   */
#define _ARESET       "\E[m"        /* Resetear todo.       */


#define _TNEGRO       "\x1b[30m"    /* Define el color del texto en negro.              */
#define _TROJO        "\x1b[31m"    /* Define el color del texto en rojo.               */
#define _TVERDE       "\x1b[32m"    /* Define el color del texto en verde.              */
#define _TAMARILLO    "\x1b[33m"    /* Define el color del texto en amarillo.           */
#define _TAZUL        "\x1b[34m"    /* Define el color del texto en azul.               */
#define _TMORADO      "\x1b[35m"    /* Define el color del texto en morado.             */
#define _TCYAN        "\x1b[36m"    /* Define el color del texto en cyan.               */
#define _TBLANCO      "\x1b[37m"    /* Define el color del texto en blanco.             */

#define _FNEGRO       "\x1b[40m"    /* Define el color del fondo del texto en negro.    */
#define _FROJO        "\x1b[41m"    /* Define el color del fondo del texto en rojo.     */
#define _FVERDE       "\x1b[42m"    /* Define el color del fondo del texto en verde.    */
#define _FAMARILLO    "\x1b[43m"    /* Define el color del fondo del texto en amarillo. */
#define _FAZUL        "\x1b[44m"    /* Define el color del fondo del texto en azul.     */
#define _FCYAN        "\x1b[46m"    /* Define el color del fondo del texto en cyan.     */
#define _FBLANCO      "\x1b[47m"    /* Define el color del fondo del texto en  tenis[i].peso); blanco.   */

#define _NEGRITA      "\E[1m"       /* Negrita.        */
#define _NNEGRITA     "\E[22m"      /* No negrita.     */
#define _CURSIVA      "\E[3m"       /* Ccursiva.       */
#define _NCURSIVA     "\E[23m"      /* No cursiva.     */
#define _SUBRAYADO    "\E[4m"       /* Subrayado.      */
#define _NSUBRAYADO   "\E[24m"      /* No subrayado.   */
#define _PARPADEANTE  "\E[5m"       /* Parpadeante.    */
#define _NPARPADEANTE "\E[25m"      /* No parpadeante. */



#define TAM 15



/*Declaración de la estructura*/
struct TENIS
{
/*Declaración de los componentes de la estructura*/
    char marca[TAM];
    float talla;
    char color[TAM];
    float precio;
    char tipo[TAM];
    char opcionbuscar;
} tenis;


/*Declaración de la funcion principal*/
int main(void)
{
    /*Declaración de las variables*/
    int opcion;
    int array[20];
    struct TENIS tenis [10];
    int numtenis;
    char c;
    int opcionbuscar=0;
    char marcabuscar[20];
    char colorbuscar[20];
    char tipobuscar[20];


    /*Inicializacion del menú*/
    printf(_TROJO _NEGRITA"\n\t\tBIENVENIDOS   A      D P O R T I S \n");
    printf(_TAMARILLO _NEGRITA "\n\t 1. Insertar datos de tenis\n");
    printf(_TAMARILLO _NEGRITA "\n\t 2. Listar datos normalmente\n");
    printf(_TAMARILLO _NEGRITA "\n\t 3. Ordenar de manera ascendente\n");
    printf(_TAMARILLO _NEGRITA "\n\t 4. Ordenar de manera descendente\n");
    printf(_TAMARILLO _NEGRITA "\n\t 5. Buscar Tenis\n");
    printf(_TAMARILLO _NEGRITA "\n\t 6. Actualizar datos\n");
    printf(_TAMARILLO _NEGRITA "\n\t 7. Eliminar Tenis\n");
    printf(_TAMARILLO _NEGRITA "\n\t 8. Quienes Somos\n");
    printf(_TAMARILLO _NEGRITA "\n\t 9. salir \n");

    /*Utilización de un ciclo do while*/
    do{

          /*Selección de la opción a realizar*/
          printf(_TCYAN     _NEGRITA "\n\n Introduzca la opcion que desea realizar: " );
          scanf("%d", &opcion);

          /*Utilización de un switch para tomar en cuenta la selección de cada uno de los casos*/

          switch (opcion) {

             case 1:

                printf(_TCYAN     _NEGRITA "\nCuantos tenis desea ingresar:" );
                scanf("%d",&numtenis);
                for(int i=0; i< numtenis;i++)
                {
                    /*Ingresando los datos de los tenis*/
                    printf(_TMORADO     _NEGRITA"\n\nINGRESE LOS DATOS DEL TENIS: %d\n",i + 1);
                    printf("---------------------------------------\n");
                    printf(_TCYAN     _NEGRITA "\n\t Ingrese la marca del tenis: " );
                    scanf("%s",tenis[i].marca);

                    printf(_TCYAN     _NEGRITA "\t Ingrese la talla del tenis: " );
                    scanf("%f",&tenis[i].talla);

                    printf(_TCYAN     _NEGRITA "\t Ingrese el color del tenis: ");
                    scanf("%s", tenis[i].color);

                    printf(_TCYAN     _NEGRITA "\t Introduce el tipo del tenis: ");
                    scanf("%s",tenis[i].tipo);

                    printf(_TCYAN     _NEGRITA "\t Introduce el precio del tenis: ");
                    scanf("%f",&tenis[i].precio);
                }

                /*Utilización de un ciclo while */
                printf(_TVERDE     _NEGRITA "\n Enter para elegir otra opcion\n");
                while(getchar() != '\n');
                while((c=getchar()) != '\n'){}
                /*Terminación de del primer case*/

             break;

             case 2:
                /*Imprimir datos del producto utilizando un ciclo for*/
                for(int i=0;i<numtenis;i++)
                {
                    printf(_TVERDE"------------------------------------------------------------------------\n");
                    printf("%s\t|     %.2f\t|     %s\t|     %s\t|      %.2f|\t \n",   tenis[i].marca,
                                                                                 tenis[i].talla,
                                                                                 tenis[i].color,
                                                                                 tenis[i].tipo,
                                                                                 tenis[i].precio);
                    printf("\n");                              }
                    /*Terminación del segundo case*/
             break;



             case 3:


                for(int i=0; i<numtenis; i++)
                {
                    array[i]=i;
                }/*usando metodo de  burbuja para ordenar los datos de forma ascendente*/


                for (int i=0;i<numtenis;i++)
                {
                    for (int j =i+1; j <numtenis; j++)
                    {
                          if( strcmp(tenis[array[i]].marca,tenis[array[j]].marca)>0)
                          {
                              int aux=array[j];
                              array[j]=array[i];
                              array[i]=aux;
                          }
                    }
                }
                for(int i=0;i<numtenis;i++)
                {
                    printf(_TVERDE"------------------------------------------------------------------------\n");
                    printf("%s\t|     %.2f\t|     %s\t|      %s\t|      %.2f\t| \n",   tenis[array[i]].marca,
                                                                                       tenis[array[i]].talla,
                                                                                       tenis[array[i]].color,
                                                                                       tenis[array[i]].tipo,
                                                                                       tenis[array[i]].precio);
                    printf("\n"); }
                    /*Terminación del tercer case*/
             break;


             case 4:

                  for(int i=0; i<numtenis; i++)
                  {
                      array[i]=i;
                  }/*usando metodo de  burbuja para ordenar los datos de forma descendente*/


                  for (int i=0;i<numtenis;i++)
                  {
                      for (int j =i+1; j <numtenis; j++)
                      {
                          if( strcmp(tenis[array[i]].marca,tenis[array[j]].marca)<0)
                          {
                              int aux=array[j];
                              array[j]=array[i];
                              array[i]=aux;
                          }
                      }
                  }
                  for(int i=0;i<numtenis;i++)
                  {
                        /*Imṕrimiendo de manera ascendente*/

                        printf(_TVERDE"--------------------------------------------------------------------------\n");
                        printf("%s\t|     %.2f\t|     %s\t|      %s\t|      %.2f\t|  \n",   tenis[array[i]].marca,
                                                                                            tenis[array[i]].talla,
                                                                                            tenis[array[i]].color,
                                                                                            tenis[array[i]].tipo,
                                                                                            tenis[array[i]].precio);
                        printf("\n");}
                      /*Terminación del cuarto caso*/

             break;



             case 5:

							      while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
							             printf(_TAMARILLO _NEGRITA "\n\nB U S C A R\n\n");
                           printf(_TCYAN     _NEGRITA"Buscar tenis por:\n\n" );
                           printf(_TBLANCO   _NEGRITA"\t 1.Marca\n\n");
                           printf(_TBLANCO   _NEGRITA"\t 2.Color\n\n");
                           printf(_TBLANCO   _NEGRITA"\t 3.Tipo de tenis\n\n");






                           printf(_TCYAN     _NEGRITA "Introduzca una opcion: ");
							             scanf("%d", &opcionbuscar);



                           switch(opcionbuscar){

                                    case 1:

                                        while(getchar() != '\n');



															printf(_TAMARILLO  _NEGRITA "\n\nIngrese la marca de tenis: ");
															fgets(marcabuscar, TAM, stdin);
															strcpy(marcabuscar, strtok(marcabuscar, "\n"));



														  for(int i = 0; i < numtenis; i++)
																if(strcmp(marcabuscar, tenis[i].marca) == 0)
																{
																	printf(_TBLANCO    _NEGRITA);
																	printf("|\t%-5s\t|\t%-5s\t|%-10s\t|\tTALLA\t|\tPRECIO\t|" ,"MARCA", "COLOR", "TIPO");
									          			printf("\n--------------------------------------------------------------------------------\n");
																	printf(_TBLANCO _NEGRITA);
																	printf("|%-15s|%-15s|%-15s|%10.2f\t|%10.2f\t|",      tenis[i].marca,
                  						    			                                                     tenis[i].color,
                               												                                       tenis[i].tipo,
                                              			   									                     tenis[i].precio,
                                                    			               									   tenis[i].talla);


																}

																break;

									                case 2:


        																	while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */

        																	printf(_TCYAN _NEGRITA "\n\nIntroduce el color deseado: ");
        																	fgets(colorbuscar,TAM, stdin);
        																	strcpy(colorbuscar, strtok(colorbuscar, "\n"));




        																	for(int i = 0; i < numtenis; i++)
        																		if(strcmp(colorbuscar, tenis[i].color) == 0)
        																			{
        																				printf(_TROJO     _NEGRITA);
        																				printf("%-5s|%-5s|%-10s|\tTALLA\t|   PRECIO    |", "MARCA", "COLOR", "TIPO");
        									              				printf("\n--------------------------------------------------------------------\n");
        																				printf(_TBLANCO _NEGRITA);
        																				printf("%-15s|%-15s|%-15s|%10.2f\t|%10.2f\t|", tenis[i].marca,
                                						    			                                                     tenis[i].color,
                                             												                                       tenis[i].tipo,
                                                            			   									                     tenis[i].precio,
                                                                  			               									   tenis[i].talla);

        																			}

        													break;


                                case 3:


                                          while(getchar() != '\n');



                                          printf(_TCYAN _NEGRITA "\n\nIntroduzca el tipo de tenis  deseado: ");
                                          fgets(tipobuscar,TAM, stdin);
                                          strcpy(tipobuscar, strtok(tipobuscar, "\n"));




                                      		for(int i = 0; i < numtenis; i++)
                                            if(strcmp(tipobuscar, tenis[i].tipo) == 0)
                                              {
                                                printf(_TROJO     _NEGRITA);
                                                printf("%-5s|%-5s|%-10s|\tTALLA\t|  PRECIO   |", "MARCA", "COLOR", "TIPO");
                                                printf("\n-------------------------------------------------------------------\n");
                                                printf(_TBLANCO _NEGRITA);
                                                printf("%-15s|%-15s|%-15s|%10.2f\t|%10.2f\t|", tenis[i].marca,
                                						    			                                                     tenis[i].color,
                                             												                                       tenis[i].tipo,
                                                            			   									                     tenis[i].precio,
                                                                  			               									   tenis[i].talla);

                                              }

                            break;


          }

							printf(_TVERDE _NEGRITA "\n\nPresione Enter para volver al  menu inicio: ");
							while((c=getchar()) != '\n')

              break;




    /*Caso en el cual la opcion es actualizar*/

			case 6:

          while(getchar() != '\n');
							printf(_TAMARILLO _NEGRITA "\n\n A C T U A L I Z A R\n\n");



							printf(_TCYAN     _NEGRITA "Buscar el tenis para actualizar por:\n\n");
							printf(_TBLANCO   _NEGRITA "\t1. Marca\n\n");
							printf(_TBLANCO   _NEGRITA "\t2. Color \n\n");
              printf(_TBLANCO   _NEGRITA "\t3. Tipo \n\n");


							printf(_TCYAN     _NEGRITA "Introduzca la opcion a buscar: ");
							scanf("%d", &opcionbuscar);

							switch(opcionbuscar)
							{
									case 1:
														while(getchar() != '\n');

														printf(_TCYAN _NEGRITA "\n\nIntroduzca  la marca que desea actualizar: ");
														fgets(marcabuscar, TAM, stdin);
														strcpy(marcabuscar, strtok(marcabuscar, "\n"));



														for(int i = 0; i < numtenis; i++)
														{
															if(strcmp(marcabuscar, tenis[i].marca) == 0)
															{
																printf(_TROJO     _NEGRITA);
																printf("%-5s|%-5s|%-10s|\tTALLA\t|   PRECIO  |", "MARCA", "COLOR", "TIPO");
									              printf("\n----------------------------------------------------------------------------------------------------------------------------\n");
																printf(_TBLANCO _NEGRITA);
																printf("%-15s|%-15s|%-15s|%10.2f|%10.2f\t|",           tenis[i].marca,
                  								                                                         tenis[i].color,
                                   									                                       tenis[i].tipo,
                                                     									                     tenis[i].precio,
                                                                       									   tenis[i].talla);



																printf("\n\n");


																printf(_TBLANCO _NEGRITA "Introduzca  la marca del tenis: "              _NNEGRITA _TVERDE);
																fgets(tenis[i].marca, TAM, stdin);                                    /* Solicita la marca al usuario */
																strcpy(tenis[i].marca, strtok(tenis[i].marca, "\n"));								    /* Elimina el salto de linea '\n' que genera fgets() */



																printf(_TBLANCO _NEGRITA "Introduzca el color del tenis: "           _NNEGRITA _TVERDE);
																fgets(tenis[i].color, TAM, stdin);                                 /* Solicita el color al usuario        */
																strcpy(tenis[i].color, strtok(tenis[i].color, "\n"));             /* Elimina el salto de linea '\n' que genera fgets() */



																printf(_TBLANCO _NEGRITA "Introduzca el tipo de tenis: " _NNEGRITA _TVERDE);
																fgets(tenis[i].tipo, TAM, stdin);                         /* Solicita  el tipo de tenis al usuario        */
																strcpy(tenis[i].tipo, strtok(tenis[i].tipo, "\n")); /*Elimina el salto de linea '\n' que genera fgets    */



																printf(_TBLANCO _NEGRITA "Introduzca el precio del tenis: "                _NNEGRITA _TVERDE);
																scanf("%f", &tenis[i].precio);

                                printf(_TBLANCO _NEGRITA "Introduzca la talla del tenis: "                _NNEGRITA _TVERDE);
																scanf("%f", &tenis[i].talla);



														  	while(getchar() != '\n'); /* Limpiar el buffer en caso de tener almacenado el salgo de linea */




																printf(_TROJO     _NEGRITA);
																printf("%-5s|%-5s|%-10s|\tTALLA\t|   PRECIO    |", "MARCA", "COLOR", "TIPO");
									             	printf("\n------------------------------------------------------------------------\n");
																printf(_TBLANCO _NEGRITA);
																printf("%-15s|%-15s|%-15s|%10.2f\t|%10.2f\t|",         tenis[i].marca,
                  								                                                         tenis[i].color,
                                   									                                       tenis[i].tipo,
                                                     									                     tenis[i].precio,
                                                                       									   tenis[i].talla);
																break;
															}
														}


														break;

            						case 2:

            														while(getchar() != '\n');



            														printf(_TCYAN _NEGRITA "\n\nIntroduzca el color de tenis: ");
            														fgets(colorbuscar, 50, stdin);
            														strcpy(colorbuscar, strtok(colorbuscar, "\n"));


                                        for(int i = 0; i < numtenis; i++)
                                      	{
                                          	if(strcmp(colorbuscar, tenis[i].color) == 0)
              															{
                																printf(_TROJO     _NEGRITA);
                																printf("%-5s|%-5s|%-10s|\tTALLA\t|   PRECIO  |", "MARCA", "COLOR", "TIPO");
                									              printf("\n-------------------------------------------------------------------------\n");
                																printf(_TBLANCO _NEGRITA);
                																printf("%-15s|%-15s|%-15s|%10.2f|%10.2f\t|",               tenis[i].marca,
                                  								                                                         tenis[i].color,
                                                   									                                       tenis[i].tipo,
                                                                     									                     tenis[i].precio,
                                                                                       									   tenis[i].talla);



                              									printf("\n\n");
                																printf(_TBLANCO _NEGRITA "Introduzca  la marca del tenis: "              _NNEGRITA _TVERDE);
                																fgets(tenis[i].marca, TAM, stdin);                                    /* Solicita la marca al usuario */
                																strcpy(tenis[i].marca, strtok(tenis[i].marca, "\n"));								    /* Elimina el salto de linea '\n' que genera fgets() */



                																printf(_TBLANCO _NEGRITA "Introduzca el color del tenis: "           _NNEGRITA _TVERDE);
                																fgets(tenis[i].color, TAM, stdin);                                 /* Solicita el color al usuario        */
                																strcpy(tenis[i].color, strtok(tenis[i].color, "\n"));             /* Elimina el salto de linea '\n' que genera fgets() */



                																printf(_TBLANCO _NEGRITA "Introduzca el tipo de tenis: " _NNEGRITA _TVERDE);
                																fgets(tenis[i].tipo, TAM, stdin);                         /* Solicita  el tipo de tenis al usuario        */
                																strcpy(tenis[i].tipo, strtok(tenis[i].tipo, "\n")); /*Elimina el salto de linea '\n' que genera fgets    */



                																printf(_TBLANCO _NEGRITA "Introduzca el precio del tenis: "                _NNEGRITA _TVERDE);
                																scanf("%f", &tenis[i].precio);

                                                printf(_TBLANCO _NEGRITA "Introduzca la talla del tenis: "                _NNEGRITA _TVERDE);
                																scanf("%f", &tenis[i].talla);


                														  	while(getchar() != '\n');




                  																printf(_TROJO     _NEGRITA);
                  																printf("%-5s|%-5s|%-10s|\tTALLA\t|   PRECIO    |" , "MARCA", "COLOR", "TIPO");
                  									             	printf("\n-------------------------------------------------------------------------\n");
                  																printf(_TBLANCO _NEGRITA);
                  																printf("%-15s|%-15s|%-15s|%10.2f\t|%10.2f\t|",             tenis[i].marca,
                                    								                                                         tenis[i].color,
                                                     									                                       tenis[i].tipo,
                                                                       									                     tenis[i].precio,
                                                                                         									   tenis[i].talla);
                                              }

																break;

                         case 3:


                                              while(getchar() != '\n');


                                              printf(_TCYAN _NEGRITA "\n\nIntroduzca el tipo de tenis: ");
                                              fgets(tipobuscar, TAM, stdin);
                                              strcpy(tipobuscar, strtok(tipobuscar, "\n"));


                                              for(int i = 0; i < numtenis; i++)
                                              {
                                                  if(strcmp(tipobuscar, tenis[i].tipo) == 0)
                                                  {
                                                      printf(_TROJO     _NEGRITA);
                                                      printf("%-5s|%-5s|%-10s|\tTALLA\t|   PRECIO  |" ,"MARCA", "COLOR", "TIPO");
                                                      printf("\n----------------------------------------------------------------------------------------------------------------------------\n");
                                                      printf(_TBLANCO _NEGRITA);
                                                      printf("%-15s|%-15s|%-15s|%10.2f|%10.2f\t|",               tenis[i].marca,
                                                                                                                 tenis[i].color,
                                                                                                                 tenis[i].tipo,
                                                                                                                 tenis[i].precio,
                                                                                                                 tenis[i].talla);



                                                      printf("\n\n");
                                                      printf(_TBLANCO _NEGRITA "Introduzca  la marca del tenis: "              _NNEGRITA _TVERDE);
                                                      fgets(tenis[i].marca, TAM, stdin);                                    /* Solicita la marca al usuario */
                                                      strcpy(tenis[i].marca, strtok(tenis[i].marca, "\n"));								    /* Elimina el salto de linea '\n' que genera fgets() */



                                                      printf(_TBLANCO _NEGRITA "Introduzca el color del tenis: "           _NNEGRITA _TVERDE);
                                                      fgets(tenis[i].color, TAM, stdin);                                 /* Solicita el color al usuario        */
                                                      strcpy(tenis[i].color, strtok(tenis[i].color, "\n"));             /* Elimina el salto de linea '\n' que genera fgets() */



                                                      printf(_TBLANCO _NEGRITA "Introduzca el tipo de tenis: " _NNEGRITA _TVERDE);
                                                      fgets(tenis[i].tipo, TAM, stdin);                         /* Solicita  el tipo de tenis al usuario        */
                                                      strcpy(tenis[i].tipo, strtok(tenis[i].tipo, "\n")); /*Elimina el salto de linea '\n' que genera fgets    */



                                                      printf(_TBLANCO _NEGRITA "Introduzca el precio del tenis: "                _NNEGRITA _TVERDE);
                                                      scanf("%f", &tenis[i].precio);

                                                      printf(_TBLANCO _NEGRITA "Introduzca la talla del tenis: "                _NNEGRITA _TVERDE);
                                                      scanf("%f", &tenis[i].talla);


                                                      while(getchar() != '\n');




                                                      printf(_TROJO     _NEGRITA);
                                                      printf("%-5s|%-5s|%-10s|\tTALLA\t|   PRECIO  |", "MARCA", "COLOR", "TIPO");
                                                      printf("\n----------------------------------------------------------------------\n");
                                                      printf(_TBLANCO _NEGRITA);
                                                      printf("%-15s|%-15s|%-15s|%10.2f\t|%10.2f\t|",               tenis[i].marca,
                                                                                                                   tenis[i].color,
                                                                                                                   tenis[i].tipo,
                                                                                                                   tenis[i].precio,
                                                                                                                   tenis[i].talla);

              													               break;

                                 }
														break;

							}
            }
							while(getchar() != '\n');

							printf(_TAMARILLO _NEGRITA "\n\nPresione Enter para regresar al menu principal: ");
							while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
							{}
							break;



            break;
}

          case 7:

              while(getchar() != '\n');
							printf(_TAMARILLO _NEGRITA "\n\nE L I M I N A R\n\n");


							printf(_TCYAN     _NEGRITA "Buscar tenis por: \n\n");
							printf(_TBLANCO   _NEGRITA "1. Marca\n");
							printf(_TBLANCO   _NEGRITA "2. Color \n\n");
              printf(_TBLANCO   _NEGRITA "3. Tipo \n\n");



							printf(_TCYAN     _NEGRITA "Introduzca una opcion: ");
							scanf("%d", &opcionbuscar);



							switch(opcionbuscar)
							{
									                    case 1:
              														while(getchar() != '\n');



              														printf(_TCYAN _NEGRITA "\n\nIntroduzca la marca: ");
              														fgets(marcabuscar, TAM, stdin);
              														strcpy(marcabuscar, strtok(marcabuscar, "\n"));



              														for(int i = 0; i < numtenis; i++)
              														{
              															if(strcmp(marcabuscar, tenis[i].marca) == 0)
              															{
              																printf(_TROJO     _NEGRITA);
              																printf("%-5s|%-5s|%-10s|\tTALLA\t|     PRECIO     |", "MARCA", "COLOR", "TIPO");
              									              printf("\n----------------------------------------------------------------------------------------------------------------------------\n");
              																printf(_TBLANCO _NEGRITA);
              																printf("%-15s|%-15s|%-15s|%10.2f\t|%10.2f\t|",             tenis[i].marca,
                                								                                                         tenis[i].color,
                                                 									                                       tenis[i].tipo,
                                                                   									                     tenis[i].precio,
                                                                                     									   tenis[i].talla);


              																printf("\n\n");



              								              	printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "                _NNEGRITA _TVERDE);



              																char opcionEliminar;
              								             	  while((opcionEliminar = getchar()) == 's')
              																{
              																		for(int j = i; j < numtenis-1; j++)
              																		{
              																			strcpy(tenis[j].marca,       tenis[j+1].marca);
              																			strcpy(tenis[j].color,       tenis[j+1].color);
              																			strcpy(tenis[j].tipo, tenis[j+1].tipo);
              																			tenis[j].precio     = tenis[j+1].precio;
              																		 	tenis[j].talla     = tenis[j+1].talla;

              																		}

              																		printf("\n\nEl registro se ha eliminado exitosamente.\n\n");

              																}

              																strcmp(tenis[numtenis-1].marca,    "");
              																strcmp(tenis[numtenis-1].color,    "");
              																strcmp(tenis[numtenis-1].tipo,  "");
              																tenis[numtenis-1].precio     = '\0';
              																tenis[numtenis-1].talla = -1;




              																numtenis--;


                                            }
              								              	printf("\n\n");

              																for(int i = 0; i < numtenis; i++)
              																{

              																	/* Comparar la opción a buscar con el color del tenis */
              																	if(strcmp(colorbuscar, tenis[i].color) == 0)
              																	{
              																		printf(_TROJO     _NEGRITA);
              																		printf("%-5s|%-5s|%-10s|\tTALLA\t|   PRECIO   |", "MARCA", "COLOR", "TIPO");
              									              		printf("\n----------------------------------------------------------------------------------------------------------------------------\n");
              																		printf(_TBLANCO _NEGRITA);
              																		printf("%-15s|%-15s|%-15s|%10.2f\t|%10.2f\t|",             tenis[i].marca,
                                    								                                                         tenis[i].color,
                                                     									                                       tenis[i].tipo,
                                                                       									                     tenis[i].precio,
                                                                                         									   tenis[i].talla);
              																}


              															break;

															               }
														           }


														      break;

									                     case 2:
                      														while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */



                      														printf(_TCYAN _NEGRITA "\n\nIntroduzca el color: ");
                      														fgets(colorbuscar, TAM, stdin);
                      														strcpy(colorbuscar, strtok(colorbuscar, "\n"));



                      														for(int i = 0; i < numtenis; i++)
                      														{
                      															if(strcmp(colorbuscar, tenis[i].color) == 0)
                      															{
                      																printf(_TROJO     _NEGRITA);
                      																printf("%-5s|%-5s|%-10s|\tTALLA\t|    PRECIO    |", "MARCA", "COLOR", "TIPO");
                      									              printf("\n----------------------------------------------------------------------------------------------------------------------------\n");
                                                      printf("%-15s|%-15s|%-15s|%10.2f\t|%10.2f\t|",             tenis[i].marca,                      																
                                        								                                                         tenis[i].color,
                                                         									                                       tenis[i].tipo,
                                                                           									                     tenis[i].precio,
                                                                                             									   tenis[i].talla);


                      																printf("\n\n");

                      																printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "                _NNEGRITA _TVERDE);



                      																char opcionEliminar;
                      								             	  while((opcionEliminar = getchar()) == 's')
                      																{
                      																		for(int j = i; j < numtenis-1; j++)
                      																		{
                      																			strcpy(tenis[j].marca,          tenis[j+1].marca);
                      																			strcpy(tenis[j].color,       tenis[j+1].color);
                      																			strcpy(tenis[j].tipo,    tenis[j+1].tipo);
                      																			tenis[j].precio     = tenis[j+1].precio;
                      																		 	tenis[j].talla = tenis[j+1].talla;


                      																		}
                      																		printf("\n\nSe ha eliminado : ...\n\n");
                      																}

                      																strcpy(tenis[numtenis-1].marca,          "");
                      																strcpy(tenis[numtenis-1].color,       "");
                      																strcpy(tenis[numtenis-1].tipo, "");
                      																tenis[numtenis-1].precio    = '\0';
                      																tenis[numtenis-1].talla = -1;




                      																numtenis--;



                      																for(int i = 0; i < numtenis; i++)
                      																{
                      																	if(strcmp(colorbuscar, tenis[i].color) == 0)
                      																	{
                      																		printf(_TROJO     _NEGRITA);
                      																		printf("%-5s|%-5s|%-10s|\tTALLA\t|   PRECIO    |", "MARCA", "COLOR", "TIPO");
                      									              		printf("\n----------------------------------------------------------------------------------------------------------------------------\n");
                      																		printf(_TBLANCO _NEGRITA);
                      																		printf("%-15s|%-15s|%-15s|\t%10.2f\t|\t%10.2f\t|", tenis[i].marca,
                                                         											                                       tenis[i].color,
                                                                  	  	       									                     tenis[i].tipo,
                                                                    	  	                       									   tenis[i].precio,
                      									                                  		                                       tenis[i].talla);
                      																	}
                      																}
														break;

                    case 3:
                                  while(getchar() != '\n');     /* Limpiar el buffer en caso de tener almacenado el salgo de linea */



                                  printf(_TCYAN _NEGRITA "\n\nIntroduzca el color: ");
                                  fgets(tipobuscar, TAM, stdin);
                                  strcpy(tipobuscar, strtok(tipobuscar, "\n"));



                                  for(int i = 0; i < numtenis; i++)
                                  {
                                      if(strcmp(tipobuscar, tenis[i].tipo) == 0)
                                      {
                                          printf(_TROJO     _NEGRITA);
                                          printf("%-5s|%-5s|%-10s|\tTALLA\t|    PRECIO    |", "MARCA", "COLOR", "TIPO");
                                          printf("\n----------------------------------------------------------------------------------------------------------------------------\n");
                                          printf(_TBLANCO _NEGRITA);
                                          printf("%-15s|%-15s|%-15s|\t%10.2f\t|\t%10.2f\t|", tenis[i].marca,
                                                                                                     tenis[i].color,
                                                                                                     tenis[i].tipo,
                                                                                                     tenis[i].precio,
                                                                                                     tenis[i].talla);


                                          printf("\n\n");

                                          printf(_TBLANCO _NEGRITA "\n\nPresione una (s) si esta seguro de eliminar el registo:  "                _NNEGRITA _TVERDE);



                                          char opcionEliminar;
                                          while((opcionEliminar = getchar()) == 's')
                                          {
                                              for(int j = i; j < numtenis-1; j++)
                                              {
                                                strcpy(tenis[j].marca,   tenis[j+1].marca);
                                                strcpy(tenis[j].color,   tenis[j+1].color);
                                                strcpy(tenis[j].tipo,    tenis[j+1].tipo);
                                                tenis[j].precio     =    tenis[j+1].precio;
                                                tenis[j].talla =         tenis[j+1].talla;


                                              }
                                              printf("\n\nSe ha eliminado : ...\n\n");
                                          }

                                          strcpy(tenis[numtenis-1].marca,          "");
                                          strcpy(tenis[numtenis-1].color,       "");
                                          strcpy(tenis[numtenis-1].tipo, "");
                                          tenis[numtenis-1].precio    = '\0';
                                          tenis[numtenis-1].talla = -1;




                                          numtenis--;



                                          for(int i = 0; i < numtenis; i++)
                                          {
                                            if(strcmp(tipobuscar, tenis[i].tipo) == 0)
                                            {
                                              printf(_TROJO     _NEGRITA);
                                              printf("%-5s|%-5s|%-10s|\tTALLA\t|   PRECIO    |", "MARCA", "COLOR", "TIPO");
                                              printf("\n----------------------------------------------------------------------------------------------------------------------------\n");
                                              printf(_TBLANCO _NEGRITA);
                                              printf("%-15s|%-15s|%-15s|\t%10.2f\t|\t%10.2f\t|", tenis[i].marca,
                                                                                                         tenis[i].color,
                                                                                                         tenis[i].tipo,
                                                                                                         tenis[i].precio,
                                                                                                         tenis[i].talla);
                                            }
                                          }
                                          break;
                                														}

                                													}
                                							}
                                							printf(_TAMARILLO _NEGRITA "\n\nPresione Enter para regresar al menu principal: ");
                                							while((c=getchar()) != '\n')  /* Solicita un enter al usuario para reiniciar el menu principal */
                                							{}
                                							break;


                                            break;
                                          }
                                        }
                             case 8:

                                            while(getchar() != '\n');
                                              /** Esta linea usa cuando está seguro de que en el buffer se guardó un salto de linea (\n)*/
                                             printf(_TAMARILLO _NEGRITA "\n\nQ U I E N E S    S O M O S\n\n");


                                             printf("\n----------------------------------------------------------------------------------------------");
                                             printf("\n\t\t\t\t\tDPORTIS\n");
                                             printf("\n\tDPORTIS: Si calzas con tenis calzas mejor.");

                                             printf("\n----------------------------------------------------------------------------------------------");
                                             printf("\n\tPresidenta:\n");
                                             printf("\nMaria Emilia Palomec Reyes.\t\t Contactar: 951-343-9295  o emilia0599@gmail.com");
                                             printf("\n----------------------------------------------------------------------------------------------");
                                             printf("\n\tVicepresidente\n");
                                             printf("\nRaymundo Leon Hernandez Cruz\t\t\t Contactar: 951-295-3766  o  rayadleon@gmail.com");
                                             printf("\n----------------------------------------------------------------------------------------------");
                                             printf("\n\tDirector General\n");
                                             printf("\nLeonardo Arellanes Arellanes\t\t Contactar: 951-439-6244  o leoare14@gmail.com ");
                                             printf("\n---------------------------------------------------------------------------------------------");
                                             printf("\n\tGerente de Ventas\n");
                                             printf("\nEdgar Alejandro Hernandez Hernandez\t Contactar: 951-136-4939 o edgarh2014.94@gmail.com");
                                             printf("\n---------------------------------------------------------------------------------------------");
                                             printf("\n\tSupervisor de Areas de ventas y sistemas\n");
                                             printf("\nIrving Efren Garcia Ramos\t\t Contactar: 951-247-7498  o irvin.16@outlook.es");
                                             printf("\n---------------------------------------------------------------------------------------------\n");

                                             while(getchar() != '\n'); /* Limpiar el buffer en caso de tener almacenado el salgo de linea */
                                             printf("Presiones Enter para salir: ");



                                     break;


                          case 9:
                            /*opción en caso de no realizar ninguna acción*/
                            exit (0);
                            break;
        }
      }
        while(opcion != 9);
/*Cierre del do while*/


return 0;
}
