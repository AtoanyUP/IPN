// Estructura_arreglos.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

struct Perfil {
    char nombre[30];
    int telefono;
    int edad;
};

using namespace std;

int main()
{
    int n, i;

    struct Perfil registros[10];

    for (i = 1; i <= 2; i++)
    {
        cout << "***CUENTA " << i << " ***" << endl;
        cout << "Introduce el nombre de la cuenta: " << i << endl;
        cin>> registros[i].nombre;
    }

    cout << endl;

    for (int i = 1; i <= 2; i++)
    {
        cout << "***CUENTA " << i << " ***" << endl;
        cout << "Nombre " << i << endl;
        cout << registros[i].nombre << endl;
    }

    return 0;
}


