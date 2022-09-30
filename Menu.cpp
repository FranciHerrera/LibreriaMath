#include <iostream>
#include "Matrix.h"

using namespace std;

int main()
{
    int opcion;
    mates obj;
    do {
        cout << "-------------------------------------\n";
        cout << "Bienvenido a photomath fake \n";
        cout << "--------------------------------- \n";
        cout << "¿Que quieres hacer? \n";
        cout << "1 - Multiplicar matrices \n";
        cout << "2 - Sacar las funciones trigonometricas en grados \n";
        cout << "3 - Sacar las funciones trigonometricas en radianes \n";
        cout << "4 Salir del programa";
        cout << "---------------------------------- \n";
        cout << "Opcion: \n";
        cin >> opcion;

        switch (opcion) {
        case 1:
            obj.intro();
            cout << "\n ¿Desea hacer algo mas? \n Si = 1 \n No = presione cualquier numero \n";
            cin >> opcion;
            if (opcion == 1) {
                break;
            }
            else {
                return 0;
            }
        case 2:
            obj.trigo();
            cout << "\n ¿Desea hacer algo mas? \n Si = 1 \n No = presione cualquier numero \n";
            cin >> opcion;
            if (opcion == 1) {
                break;
            }
            else {
                return 0;
            }
        case 3:
            obj.trigo2();
            cout << "\n ¿Desea hacer algo mas? \n Si = 1 \n No = presione cualquier numero \n";
            cin >> opcion;
            if (opcion == 1) {
                break;
            }
            else {
                return 0;
            }
        case 4:
            return 0;
        default:
            cout << "\n No disponible >:/ \n";
            break;
        }
    } while (opcion != 4);
}