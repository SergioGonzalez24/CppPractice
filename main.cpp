// Integrante 1:Sergio Gonzalez - A01745446
// Integrante 2: 

#include <iostream>
#include <string>

using std::cout;
using std::cin;

int operaNumeros(char op,int n1,int n2) {

  int res;
  switch (op) {

    case 's':
        res=n1+n2;
        cout<<res<<"\n";
        return res;
    break;

    case 'r':
        res=n1-n2;
        cout<<res<<"\n";
        return res;
    break;

    case 'm':
        res=n1*n2;
        cout<<res<<"\n";
        return res;
    break;

    default:
        cout << "Opcion no valida";
        return 0;
        break;

  }
}


void numeroimpar() {
  int div=1;
  int numero;
  do{
    cout<<"Introduzca un valor entero: \n";
    cin>>numero;
    div=numero%2;
    }
  while (div==0);
}

void sumaPares(){
  int suma=0;
  for(int i=0;i<=100;i++ )
    {
      if (i%2==0)
        {
          suma=suma+i;
        }

    }
  cout<<suma<<"\n";
}

int mediaAritmetica(int totNums) {
  int i, num, sumaT=0, prom;
  cout <<"Ingrese numeros\n";

  while (i<totNums){
    cin >> num;
    sumaT +=num;
    i++;
  }
  prom=sumaT/totNums;
  cout << "La media es de: " << prom << "\n";
  return prom;
}

void numeroMagico(){
  srand (time(NULL)); //este hace que no se repita el numero aleatorio cada que ejecutamos
  int numeromagico=rand() % 100 + 1; //100 es la cantidad de numeros que puede tomar o el maximo y el 1 es el valor minimo que puede tomar
  int numero;
  int intentos=0;
  

    do {
      cout<<"Introduzca un valor entero entre 1 y 100: \n";
      cin>>numero;
      if (numero<numeromagico){
        cout<<"MAS\n";
      }
      if (numero>numeromagico){
        cout<<"MENOS\n";
      }
      intentos++;
    }
    while (numero!=numeromagico);
    cout<<"Usted ha adivinado el numero magico "<<numeromagico<<" en "<< intentos<<" intentos \n";
  //cout<<numeromagico; //esto fue para ver que con lo de time ya no se repitiera el numero
}

int main() {

//Ejercicio 1 

  char op;
  int num1,num2;
  cout << "Elija que operacion desea realizar(s,r,m): ";
  cin >> op;

  cout << "Numeros enteros que desea utilizar: ";
  cin >> num1;
  cout << " y ";
  cin >> num2;

  operaNumeros(op,num1,num2);

//Ejercicio 2

  numeroimpar();

//Ejercicio 3
  sumaPares();

//Ejercicio 4
  int totnums;
  cout <<"Cantodad de nums\n";
  cin >> totnums;
  mediaAritmetica(totnums);

//Ejercicio 5

  numeroMagico();

    return 0;
}