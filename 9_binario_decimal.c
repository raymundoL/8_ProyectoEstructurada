/*Autor:Raymundo Leon Hernandez Cruz         */
/*E-mail: rayadleon@gmail.com                */
/*Fecha de creacion : 24/04/2018             */
/*Fecha de modificacion:25/04/2018           */
/*Descripcion: convertir de binario a decimal*/


#include <stdio.h>
#define TAM 15
int main(void)
{
  int num,i,p=0,res=0;
  int array[TAM]={1,2,4,8,16,32,64,128,256,1024,2048,4096,8192,16384,32768};
  printf("ingrese el numero en binario\n" );
  scanf("%d",&num );

  while (num>0) {
    i=num%10;
    if(i==1)
    {
      res=res+array[p];
    }
    p++;
    num=num/10;
  }
  printf("la convercion es %d",res );
return 0;
}
