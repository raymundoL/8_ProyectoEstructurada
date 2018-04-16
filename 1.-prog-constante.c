#include <stdio.h>
/*DECLARACION DE CONSTANTES CON #define*/
/* no se reservan espacios en memoria*/

#define PI 3.1416
#define G 9.81
#define TAMANO 10
#define MAX 100
/*implementacion de macro*/
#define SUMA(x ,y) x+y
#define RESTA(x, y) x-y
#define MULT(x , y) x*y
#define DIV(x ,y) x/y
#define POTCUADRADO(x) x*x
#define POTCUBO(x) x*x*x
/*DEFINIR CICLOS CON MACROS*/
#define CICLOFOR(x,y) for(x=0; x<y ;x++)
#define CICLOWHILE(i) while(i>=0)
#define CICLODOWHILE(i) do{printf("%d ", i); i--; }  while(i>=0);
/*Declaracion de constantes con cont*/
/*se reservan los espacios en memoria*/
const float pi = 3.1416;
const float g = 9.81;
const int tamano = 10;
const int min = 0;
const int max = 100;

int main(void)
{
    /*imprimir constantes de  #define*/
        printf("El valor de PI :\n %f \n ",PI );
   /*imprimir macros*/
   printf(" La suma  es :\n %d \n\n ",SUMA(3, 4) );
   printf(" La resta es :\n %d \n\n ",RESTA(3, 4) );
   printf(" La multiplicacion es :\n %d \n\n ",MULT(3, 4) );
   printf(" La divicion es :\n %d \n\n",DIV(3, 4) );
   printf(" La potencia al cuadrado es :\n\n %d \n ",POTCUADRADO(3));
   printf(" La potencia al cubo es :\n %d \n\n ",POTCUBO(3));
 /*imprimir constantes const*/
    printf("El valor de pi\n %f \n",pi );
/*utilizando las macro de ciclo*/
int x;
int y =10;
CICLOFOR(x,y)
{
  printf("\n Hola mundo ....\n");

}

i=100;
CICLOWHILE(i)
{
   printf("%d", I);
   I++;
}
CICLODUWHILE(i);




  return 0;
}
