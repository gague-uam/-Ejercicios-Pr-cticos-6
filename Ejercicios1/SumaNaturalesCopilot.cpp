/*Dado un número natural n se desea calcular la suma de los números
naturales desde 1 hasta n. Codifica el programa que resuelva este
planteamiento*/

#include <iostream>
using namespace std;

int calcularSuma(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
    }
    return suma;
}

int main() {
    int n;
    cout << "Ingrese un numero natural: ";
    cin >> n;
    int resultado = calcularSuma(n);
    cout << "La suma de los numeros naturales desde 1 hasta " << n << " es: " << resultado << endl;
    return 0;
}