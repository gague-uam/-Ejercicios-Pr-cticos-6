/*Implementa un programa que solicite al usuario ingresar una matriz y
luego calcule su transposición. La transposición de una matriz se
realiza intercambiando filas por columnas. Imprime la matriz
transpuesta como salida.*/

#include <iostream>
using namespace std;

void transponerMatriz(int matriz[][10], int filas, int columnas) {
    int matrizTranspuesta[10][10];

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matrizTranspuesta[j][i] = matriz[i][j];
        }
    }

    cout << "La matriz transpuesta es:" << endl;
    for (int i = 0; i < columnas; i++) {
        for (int j = 0; j < filas; j++) {
            cout << matrizTranspuesta[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matriz[10][10], filas, columnas;

    cout << "Ingrese el número de filas y columnas de la matriz:" << endl;
    cin >> filas >> columnas;

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cin >> matriz[i][j];
        }
    }

    transponerMatriz(matriz, filas, columnas);

    return 0;
}