#include <iostream>
#include <iomanip>
#include <stdio.h>


using namespace std;


void parOuImpar (int valor){
    if (valor % 2 == 0) {
        cout << "O número " << valor << " é par";
    }else {
        cout << "o número " << valor << " é ímpar";
    }

}


int main (){
    int numeroDigitado = 0;

    cout << "Digite um número: \n";
    cin  >> numeroDigitado;

    parOuImpar (numeroDigitado);
    
}