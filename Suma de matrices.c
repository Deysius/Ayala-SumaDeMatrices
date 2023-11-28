#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//Incluyo estas librerias para poder obtener numeros aleatorios
int main(){
int filas, columnas;
srand (time(NULL));
    printf("Ingrese el número de filas de la matriz: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas de la matriz: ");
    scanf("%d", &columnas);
    printf("Primera Matriz:\n");
    int matriz[filas][columnas];
    int matriz2[filas][columnas];
    int sumatriz[filas][columnas];
    //Incluyo tres vectore, uno para mis dos matrices, y el otro representa la suma de las dos anteriores
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            //mediante dos  bucles for, puedo moverme en las filas y columnas de la matriz
            matriz[i][j]=rand()%100 + 1;
            //Voy dando valores a la matriz, mediante la funcion de numeros aleatorios
            printf("%d\t", matriz[i][j]);
            //Imprimo la matriz
        }
        printf("\n");
    }
    printf("Segunda Matriz:\n");
    for (int i = 0; i < filas; i++)
    {
          for (int j = 0; j < columnas; j++) {
            matriz2[i][j]=rand()%100 + 1;
            printf("%d\t", matriz2[i][j]);
        }
        printf ("\n");
    }
    // Repito el mismo proceso con la matriz secundaria,obteniendo valores diferentes al primero con la funcion de numeros aleatorios
    printf("Suma de matrices:\n");
    for (int i = 0; i < filas; i++)
    {
          for (int j = 0; j < columnas; j++) {
            sumatriz[i][j]=matriz[i][j]+matriz2[i][j];
            //Finalmente le doy valores a la matriz de suma, con el sencillo paso de sumas las dos matrices, teniendo en cuenta que la suma se da, cuando son de la misma dimension, y los valores se suman en la misma posicion
            printf("%d\t", sumatriz[i][j]);

        }
        printf ("\n");
    }
return 0;
}