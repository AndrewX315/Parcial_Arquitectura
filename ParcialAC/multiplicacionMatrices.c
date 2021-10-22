// Punto 06 - 2
// Programa de multiplicacion de matrices
// Juan Sebastian Rojas Acevedo - Andres Camilo Cardenas Melo.

#include <stdio.h>
#include <stdlib.h>

void imprimir(int n, int matrizC[n][n]){
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            printf("%i\t", matrizC[i][j]);
        }
        printf("\n");
    }
}

void multiplicacionMatrices(int n, int matrizA[n][n], int matrizB[n][n], int matrizC[n][n]){
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            matrizC[i][j]=0;
            for(int k=0; k<n; k++){
                  matrizC[i][j]+= matrizA[i][k] * matrizB[k][j];
            }    
        }
    }
}

void matrizInit(int n, int matrizA[n][n]){
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            matrizA[i][j]= 2*(j-i);
        }
    }
}

int main(int argc, char **argv){
    int N = (int) atof(argv[1]);
    int matrizA[N][N], matrizB[N][N], matrizC[N][N];
    
    matrizInit(N, matrizA);
    matrizInit(N, matrizB);
    
    printf("\t\tPrograma de multiplicacion de matrices\n");
    printf("MATRIZ A\n");
    imprimir(N, matrizA);

    printf("MATRIZ B\n");
    imprimir(N, matrizB);

    printf("MULTIPLICACION MATRICES A * B\n");
    multiplicacionMatrices(N, matrizA, matrizB, matrizC);
    imprimir(N, matrizC);


}