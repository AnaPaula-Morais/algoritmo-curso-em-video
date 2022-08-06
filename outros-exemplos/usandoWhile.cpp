#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    char valor = ' ';

    cout << "Dormiu?\n";
    cin >> valor;
    valor = toupper(valor);
    
    while (valor == 'S') {
        cin >> valor;
        valor = toupper(valor);
   }


   
}