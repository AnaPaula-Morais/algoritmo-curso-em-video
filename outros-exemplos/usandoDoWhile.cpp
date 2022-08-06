#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    char valor = ' ';
    
    do {
        cout << "Dormiu?";
        cin >> valor;
        valor = toupper(valor);
    } while (valor == 'S'); 
}