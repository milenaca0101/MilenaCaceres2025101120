#include <iostream> //libreria

using namespace std;

// Declaración de funciones
float suma(float a, float b);
float resta(float a, float b);
float multiplicacion(float a, float b);
float division(float a, float b);

int main() {
    float num1, num2, rsuma, rresta, rmultiplicacion, rdivision;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Luego el segundo numero: ";
    cin >> num2;

    // Llamada a las funciones
    rsuma = suma(num1, num2);
    rresta = resta(num1, num2);
    rmultiplicacion = multiplicacion(num1, num2);
    rdivision = division(num1, num2);

    // Resultados
    cout << "\n--- Resultados ---\n";
    cout << "El resultado de la suma es: " << rsuma << endl;
    cout << "El resultado de la resta es: " << rresta << endl;
    cout << "El resultado de la multiplicacion es: " << rmultiplicacion << endl;
    
    // Verificamos si la división fue válida antes de mostrarla
    if (num2 != 0) {
        cout << "El resultado de la division es: " << rdivision << endl;
    }

    return 0;
}

// Definición de funciones
float suma(float a, float b) {
    return a + b;
}

float resta(float a, float b) {
    return a - b;
}

float multiplicacion(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    if (b == 0) {
        cout << "Error: No se puede dividir entre cero." << endl;
        return 0; // Retorna 0 por defecto en caso de error
    }
    return a / b;
}


