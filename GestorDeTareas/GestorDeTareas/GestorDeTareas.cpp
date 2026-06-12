#include <iostream>
#include <string>
using namespace std;

int main() {
    string tarea1;
    string tarea2;
    string tarea3;
    string tarea4;
    int opcion;

    do {
        cout << "Menu de tareas" << endl;
        cout << "1 Agregar tareas" << endl;
        cout << "2 Mostrar tareas" << endl;
        cout << "3 Salir" << endl;
        cout << "Elige una opcion:" << endl;
        cin >> opcion;
        cin.ignore();

        if (opcion == 1) {
            cout << "Escribe la primera tarea:" << endl;
            getline(cin, tarea1);

            cout << "Escribe la segunda tarea: " << endl;
            getline(cin, tarea2);

            cout << "Escribe la tercera tarea:" << endl;
            getline(cin, tarea3);

            cout << "Escribe la cuarta tarea:" << endl;
            getline(cin, tarea4);

            cout << "Tareas guardadas" << endl;
        }
        else if (opcion == 2) {
            cout << "Tus tareas son ";
            cout << "1 " << tarea1 << endl;
            cout << "2 " << tarea2 << endl;
            cout << "3 " << tarea3 << endl;
            cout << "4 " << tarea4 << endl;
        }
    } while (opcion != 3);

    cout << "Hasta luego" << endl;
    return 0;
};
