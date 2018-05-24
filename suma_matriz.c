#include <stdio.h>
#include <stdbool.h>  /*valores booleanos*/
/* MATRICES ESTATICOS*/
#define ROW 10
#define  COL 10

/*prototipo de la funcion*/
bool validarSumaMatriz(int filaA,int colA,int filaB, int colB);
void leerDatosMatriz(int matriz[ROW][COL],int fila,int col);
void imprimirDatosMatriz(int matriz[ROW][COL], int fila,int col);

void sumarMatriz(int matrizA[ROW][COL],int matrizB[ROW][COL], int matrizResultado[ROW][COL],int fila, int col );

int main(void)
{
   int filaA,colA;
   int filaB,colB;

   int matrizA[ROW][COL];
   int matrizB[ROW][COL];
   int matrizResultado[ROW][COL];

   printf("\nintroduce la fila de la matriz A: ");
   scanf("%d",&filaA);

   printf("\nintroduce la fila de la matriz A: ");
   scanf("%d",&colA);

   printf("\nintroduce la fila de la matriz B: ");
   scanf("%d",&filaB);

   printf("\nintroduce la fila de la matriz B: ");
   scanf("%d",&colB);
   if(validarSumaMatriz(filaA,colA,filaB,colB) == true)
   {
     /*Realizar la operacion*/
     leerDatosMatriz(matrizA, filaA, colA);
     leerDatosMatriz(matrizB, filaB, colB);

     imprimirDatosMatriz(matrizA,filaA,colA);
     imprimirDatosMatriz(matrizB,filaB,colB);

     sumarMatriz(matrizA,matrizB,matrizResultado,filaA,colA);
     printf("\n");
     printf("\nEl resultado de  la suma  es:  \n ");
     printf("\n" );
     imprimirDatosMatriz(matrizResultado,filaA,colB);

   }else
   {
     printf("NO SE PUEDE REALIZAR LA SUMA DE MATRICES\n" );
   }


  return 0;


}

void sumarMatriz(int matrizA[ROW][COL],int matrizB[ROW][COL], int matrizResultado[ROW][COL],int fila, int col )
{
  for (int i = 0; i <fila; i++)
  {
    for (int j = 0; j < col; j++)
    {
       matrizResultado[i][j] = matrizA[i][j]+matrizB[i][j];
    }
  }
}

/*usando la primera funcion de leerDatosMatriz*/
void leerDatosMatriz(int matriz[ROW][COL],int fila,int col)
{
  printf("\n\n" );
  for (int i = 0; i < fila; i++)
  {
     for (int j = 0; j < col; j++)
     {
       printf("introduce el elemento [%d][%d]", i , j);
       scanf("%d", &matriz[i][j]);
     }
  }
}

void imprimirDatosMatriz(int matriz[ROW][COL] ,int fila,int col)
{
  printf("\n\n");
  for (int i = 0; i <fila; i++)
   {
     printf("|");
    for (int j = 0; j < col; j++)
    {
      printf(" %d " ,matriz[i][j]);
    }
     printf("|");
  }
}





bool validarSumaMatriz(int filaA,int colA,int filaB, int colB)
{
  if((filaA == filaB) && (colA == colB))
  {
    return true;
  }
 return false;
}
