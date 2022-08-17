#include <iostream>
#include <iomanip>

using namespace std;


void proxFibonacci(int a, int b) {
    for (int i = 1; i < 10; i++) {
    int numero3;
    numero3 = a + b;
    cout << numero3 << endl;

    a = b;
    b = numero3;
    }
}

int main () {
    int numero1 = 0;
    int numero2 = 1;

    cout << numero1 << endl;
    cout << numero2 << endl;

    proxFibonacci(numero1, numero2); 
    
    

    
}