#include <iostream>
using std::cout;
using std::endl;

int factorial(int n);

int main () {

    cout << factorial(5)<<endl;
}

int factorial (int n) {

    if (n==1){
        return 1;
    }
    else {

        return n*factorial(n-1);
    }
}