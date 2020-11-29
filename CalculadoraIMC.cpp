#include <iostream>
#include <math.h>
using std::cout;
using std::cin;
using std::endl;

int main () {

    float peso;
    float altura;
    
    cout << "Estta calculadora funciona para medir tu IMC" << endl;
    cout << "Introduce tu peso en kg" << endl;
    cin >> peso;
    cout << "Introduce tu estatura en metros" << endl;
    cin >> altura;
    float IMC=peso/pow(altura,2);

   cout << "El IMC es de: " << IMC << endl;
}