#include <iostream>
using namespace std;

int main()  {
    string nombre;
    int edad;
    
    cout << "ingresa tu nombre: ";
    cin >> nombre;
    
    cout << "ingresa tu edad: ";
    cin >> edad;
    
    if (edad >=18) {
        cout << "bienvenido "<< nombre << ",eres meyor de edad."<< endl;
    } else {
        cout << "bienvenido" << nombre << ", eres menos de edad." << endl;
    }
    return 0;
}

