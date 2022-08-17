#include <iostream>
#include <iomanip>

using namespace std;

int calculaDobro (int numero){
    int dobro = numero * 2;
    return dobro;
}

void imprimeDobro (int numero){
    cout << "O dobro do número é " << calculaDobro(numero);

}



int main () {
    int numeroDigitado = 0;

    cout << "Digite um número: " << endl;
    cin >> numeroDigitado;
    imprimeDobro(numeroDigitado);
}