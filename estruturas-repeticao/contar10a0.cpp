#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    // int contador = 10;

    // while (contador >= 0) {
    //     cout << contador-- << endl;
    // }

    int contador = 0;
    int valor = 0;
    int salto = 0;

    cout << "Quer contar até quanto?\n";
    cin  >> valor;

    cout << "Qual será o valor do salto?\n";
    cin  >> salto; 

    while (contador <= valor) {
        contador = contador + salto;
        cout << contador << endl;
    }
      
}