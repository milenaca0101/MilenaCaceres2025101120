#include <iostream> // Biblioteca de entrada y salida de datos.
using namespace std; // Permite usar cin y cout sin prefijos.

int main() { // Inicio obligatorio.
    int dias; // Declaración de variable.
    
    cout << "Podrias ingresar un numero del 1 al 7: "; // Pidiendo datos al usuario.
    cin >> dias;
    
    // Proceso switch
    switch (dias) {
        case 1: 
            cout << "El dia es Lunes" << endl; 
            break;
        case 2: 
            cout << "El dia es Martes" << endl; 
            break;
        case 3: 
            cout << "El dia es Miercoles" << endl; 
            break;
        case 4: 
            cout << "El dia es Jueves" << endl; 
            break;
        case 5: 
            cout << "El dia es Viernes" << endl; 
            break;
        case 6: 
            cout << "El dia es Sabado" << endl; 
            break;
        case 7: 
            cout << "El dia es Domingo" << endl; 
            break;
        default: 
            cout << "El numero que ingresaste no es valido, solo debe ser del 1 al 7, intentalo de nuevo." << endl; 
            break;
    }
    
    return 0; // Finalización del programa.
}

