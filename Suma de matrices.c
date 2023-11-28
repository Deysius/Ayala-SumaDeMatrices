#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int filas, columnas;
srand (time(NULL));
    printf("Ingrese el número de filas de la matriz: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas de la matriz: ");
    scanf("%d", &columnas);
    printf("Matriz:\n");
    int matriz[filas][columnas];
    int matriz2[filas][columnas];
    int sumatriz[filas][columnas];
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j]=rand()%100 + 1;
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Matriz 2:\n");
    for (int i = 0; i < filas; i++)
    {
          for (int j = 0; j < columnas; j++) {
            matriz2[i][j]=rand()%100 + 1;
            printf("%d\t", matriz2[i][j]);
        }
        printf ("\n");
    }
}