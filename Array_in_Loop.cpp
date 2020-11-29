#include <iostream>
using std::cout;
using std::endl;


int main () {
    
    int anArray[9] ;
    int val=45;

    for (int x = 0; x <= 8; x++) {
        
        
        anArray[x] =val ;
        cout << anArray[x] <<endl;
        val++;

        
    }

}
