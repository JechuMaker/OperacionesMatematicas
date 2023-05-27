#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    int opcion;
    float num1, num2, resultado;

    do {
        
        system("cls"); 

        cout << "PROGRAMA DE OPERACIONES BASICAS" << endl;
        cout << "===============================" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicacion" << endl;
        cout << "4. Division" << endl;
        cout << "5. Potencia" << endl;
        cout << "6. Radicacion" << endl;
        cout << "0. Salir" << endl << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;


        cin.ignore();

        switch (opcion) {
            case 1: 
                system("cls"); 
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << endl;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                cout << endl;
                resultado = num1 + num2;
                cout << "El resultado de la suma es: " << resultado << endl;
                break;

            case 2: 
                system("cls"); 
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << endl;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                cout << endl;
                resultado = num1 - num2;
                cout << "El resultado de la resta es: " << resultado << endl;
                break;

            case 3: 
                system("cls"); 
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << endl;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                cout << endl;
                resultado = num1 * num2;
                cout << "El resultado de la multiplicacion es: " << resultado << endl;
                break;

            case 4:
                system("cls"); 
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << endl;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                cout << endl;
                if (num2 != 0) {
                    resultado = num1 / num2;
                    cout << "El resultado de la division es: " << resultado << endl;
                } else {
                    cout << "No se puede dividir entre cero." << endl;
                }
                break;
                
            case 5: 
                system("cls");
                cout << "Ingrese la base: ";
                cin >> num1;
                cout << endl;
                cout << "Ingrese el exponente: ";
                cin >> num2;
                resultado = pow(num1, num2);
                cout << "El resultado de la potencia es: " << resultado << endl;
                break;

            case 6:
                system("cls"); 
                cout << "Ingrese el numero: ";
                cin >> num1;
                cout << endl;
                if (num1 >= 0) {
                    resultado = sqrt(num1);
                    cout << "El resultado de la radicacion es: " << resultado << endl;
                } else {
                    cout << "No se puede calcular la raiz de un numero negativo." << endl;
                }
                break;

            case 0:
                cout << "Saliendo del programa..." << endl;
                break;

            default:
                cout << "Opcion invalida. Intente nuevamente." << endl;
                break;
        }    

            
        cout << "Presione cualquier tecla para continuar...";
        cin.get();
        cin.ignore();
    } while (opcion != 0);

    return 0;
}
