// CuentasTwitter.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

//Operador punto

#include <iostream>

struct Perfil {
    char nombre[30];
    int telefono;
    int edad;
};

using namespace std;

int main()
{

    Perfil* registros;

    int numero_cuentas;
    cout << "Introduce cuántas cuentas de Twitter necesitas crear: " << endl;
    cin >> numero_cuentas;

    registros = (Perfil*)malloc(numero_cuentas * sizeof(Perfil));

    system("cls");
    for (int i = 1; i <= numero_cuentas; i++)
    {
        cout << "***CUENTA " << i << " ***" << endl;
        cout << "Introduce el nombre de la cuenta " << i << endl;
        cin >> registros->nombre;
        //cin >> (*registros).nombre;
        registros = registros + 1;
    }

    cout << endl;

    registros = registros - numero_cuentas;

    for (int i = 1; i <= numero_cuentas; i++)
    {
        cout << "***CUENTA " << i << " ***" << endl;
        cout << "Nombre " << i << endl;
        cout << registros->nombre << endl;
        //cout << (*registros).nombre << endl;
        registros = registros + 1;
    }


}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
