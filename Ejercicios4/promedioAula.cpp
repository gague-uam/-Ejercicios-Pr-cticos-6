/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está
compuesta por 10 estudiantes y que se tiene la nota de cada uno de
ellos.*/
#include <iostream>

using namespace std;

void calcularPromedio(float notas[100], float& promedio);

int main(int argc, char const *argv[])
{
    float notas[100], promedio;

    cout << "Digite las notas los de 10 estudiantes: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> notas[i];
    }

    calcularPromedio(notas, promedio);
    cout << "El promedio de la seccion es de: " << promedio;
    return 0;
}

void calcularPromedio(float notas[100], float& promedio)
{
    float suma = 0;
    for (int i = 0; i < 10; i++)
    {
        suma += notas[i];
    }
    promedio = suma / 10;
}