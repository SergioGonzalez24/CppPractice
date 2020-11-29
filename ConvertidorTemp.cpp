#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    cout << "Conversor de grados celcius a grados Farenheit" << endl;
    cout << "" << endl;

    cout << "Eliga 1-. Celcius a Farenheit 2-. Farenheit a Celcius" << endl;
    int opcion;
    cin >> opcion;

    float tempc,tempf;

    if (opcion == 1) {
        cout << "Celcus a Farenheit \n" << endl;
        cout << "Ingrese los grados en celcius ";
        cin >> tempc;
        

        

    }

    else if (opcion == 2) {
        
        cout << "Farenheit a celcius \n" << endl;
        cout << "Ingrese los grados en farenheit ";
        cin >> tempf;

        
    }

    else {
        cout << "opcion no valida" << "\n";

    }
    
    return 0;

}