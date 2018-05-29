/*Autor:Raymundo Leon Hernandez Cruz            */
/*Email:rayadleon@gmail.com                     */
/*Fecha de creacion:  28/05/18                  */
/*Fecha de modificacion:28/05/18                */
/*Descripciones: calcular los valores de AND,or
,Xor,COMPLEMENTO, Desplazaminto
derecha e izquierda.                            */


#include <stdio.h>

//Declarando el prototipo de la funcion
void operador_AND(int ,int);    //Declarando funcion AND
void operador_OR(int , int);    //Declarando funcion OR
void operador_comp(int);        //Declarando funcion COMPLEMENTO
void operador_Xor(int, int);    //Declarando funcion X_OR
void operador_DesDe(int, int);  //Declarando funcion DEZPLAZAMIENTO DERECHA
void operador_DesIz(int, int);  //Declarando funcion DEZPLAZAMIENTO izquierda
// Funcion principal de la funcion
int main(void)
{
    //varianbles para el AND
  int x=2;
  int y=4;
  //varianbles para el OR
  int z=90;
  int w=13;
  //varianbles para el COMPLEMENTO
  int q=9;
//varianbles para el X_OR
  int h=90;
  int i=13;
//varianbles para el X_OR
  int j=90;
  int k=13;

    printf("\tUsando el operador AND\n\n");
   // OPERADOR AND
  operador_AND(x , y);
  operador_AND(12,54);
  operador_AND(34,6);
  operador_AND(12,76);
  operador_AND(19,54);
  operador_AND(10,40);
  operador_AND(7,5);
  operador_AND(9,2);
  operador_AND(12,32);
  operador_AND(10,5);
  operador_AND(98,34);

  printf("\n" );
  printf("\tUsando el operador OR\n\n");

// operador OR
operador_OR(z , w);
operador_OR(12,54);
operador_OR(34,6);
operador_OR(12,76);
operador_OR(19,54);
operador_OR(10,40);
operador_OR(7,5);
operador_OR(9,2);
operador_OR(12,32);
operador_OR(10,5);
operador_OR(98,34);

printf("\n" );
printf("\tUsando el operador COMPLEMENTO\n\n");

// operador COMPLEMENTO
operador_comp(q);
operador_comp(98);
operador_comp(50);
operador_comp(43);
operador_comp(45);
operador_comp(23);
operador_comp(12);
operador_comp(54);
operador_comp(76);
operador_comp(41);


  printf("\n" );
  printf("\tUsando el operador X_or\n\n");

// operador X_OR
operador_Xor(h , i);
operador_Xor(12,54);
operador_Xor(34,6);
operador_Xor(12,76);
operador_Xor(19,54);
operador_Xor(10,40);
operador_Xor(7,5);
operador_Xor(9,2);
operador_Xor(12,32);
operador_Xor(10,5);
operador_Xor(98,34);

printf("\n" );
printf("\tUsando el operador Desplazaminto a la derecha\n\n");

// operador X_OR
operador_DesDe(j , k);
operador_DesDe(12,54);
operador_DesDe(34,6);
operador_DesDe(12,76);
operador_DesDe(19,54);
operador_DesDe(10,40);
operador_DesDe(7,5);
operador_DesDe(9,2);
operador_DesDe(12,32);
operador_DesDe(10,5);
operador_DesDe(98,34);

printf("\n" );
printf("\tUsando el operador Desplazaminto a la izquierda\n\n");

// operador X_OR
operador_DesIz(j , k);
operador_DesIz(12,54);
operador_DesIz(34,6);
operador_DesIz(12,76);
operador_DesIz(19,54);
operador_DesIz(10,40);
operador_DesIz(7,5);
operador_DesIz(9,2);
operador_DesIz(12,32);
operador_DesIz(10,5);
operador_DesIz(98,34);
 return 0;
}

 //invocando la funcion operador_AND
void operador_AND(int x, int y)
{

  int resultado= x&y;
  printf("El resultante del AND  de %d y %d es : %d\n",x,y,resultado );
}

//invocando la funcion operador_OR
void operador_OR(int z , int w)
{

 int resultado= z&w;
 printf("El resultante del OR  de %d y %d es : %d\n",z,w,resultado );
}
//invocando la funcion operador_comp
void operador_comp(int q)
{
 printf("El resultante del COMPLEMENTO  de ~%d: %d\n",q,~q );
}
//invocando la funcion operador_XOR
void operador_Xor(int h , int i)
{

int resultado= h^i;
 printf("El resultante del Xor  de %d y %d es : %d\n",h,i,resultado );
}
//invocando la funcion operador_DesDe
void operador_DesDe(int j , int k)
{

int resultado= j>>k;
 printf("El resultante del Xor  de %d y %d es : %d\n",j,k,resultado );
}
//invocando la funcion operador_DesIz
void operador_DesIz(int m , int n)
{

int resultado= m<<n;
 printf("El resultante del Xor  de %d y %d es : %d\n",m,n,resultado );
}
