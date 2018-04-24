
/* Autor: Raymundo Leon Hernandez Cruz    */
/* E-mail: rayadleon@gmail.com            */
/*Fecha de creacion:21/04/2018            */
/*Fecha de modificacion:23/04/2018        */
/*Descripcion: convertir de minuscula     */
/*a mayuscula y de mayuscula a minuscula  */

#include <stdio.h>

const int tamanio=5;/*definir una constante*//*este constante nos indica hasta que numero podemos imprimir*/
int main(void)
{
  char c;
  char array[tamanio],arr[tamanio];

  int index=0;
  printf("ingrese las letras en minuscula\n" );
     while((c=getchar())!='\n')/*leer carater a caracter*/
  {
     if(c >=97 && c <=122)/*validando solo caracteres: letras minusculas*/
  {
     c=c-32; /*para covertir las letras ingresadas minusculas a mayusculas*/
     array [index]= c ;
     index++;
  }
  }

     printf("\n" );
    for(int i = 0; i <tamanio; i++)
  {
    printf("%c ",array[i] );
  }

  /*imprimeindo las minusculas */
     printf("\n" );
     index=0; 
  printf("ingrese las letras en mayuscula\n" );
     while((c=getchar())!='\n')/*leer carater a caracter*/
  {
     if(c >=65&& c <=90)/*validando solo caracteres: letras mayusculas*/
  {
     c=c+32; /*para covertir las letras ingresadas en  mayusculas a minusculas*/
     arr[index]= c ;
     index++;
  }
  }

     printf("\n" );
    for(int i = 0; i <tamanio; i++)
  {
    printf("%c ",arr[i] );
  }

   printf("\n  ");

  return 0;
}
