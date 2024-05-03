/*Desarrolla un programa que solicite al usuario ingresar dos vectores
de igual longitud y luego calcule la suma de ambos vectores. El
resultado debe mostrarse en un tercer vector.*/

#include <iostream>
using namespace std;

void sumaVectores();

int main(int argc, char const *argv[])
{
    sumaVectores();
    return 0;
}


void sumaVectores()
{
    int n;
    int primervector[n];
    int segundovector[n];
    int sumadevectores[n];

    cout << "Digite la longitud de los vectores: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Digite el valor del primer vector en la posicion " << i + 1 << ": ";
        cin >> primervector[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout << "Digite el valor del segundo vector en la posicion " << i + 1 << ": ";
        cin >> segundovector[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        sumadevectores[i] = primervector[i] + segundovector[i];
    }

    cout << "La suma de ambos vectores es de: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << sumadevectores[i] << " ";
    }


}