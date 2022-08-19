#include <iostream>
#include <iomanip>

using namespace std;

int somaNumeros(int x, int y) {
    return x + y;
}

int main (){
    int valor1 = 0;
    int valor2 = 0;
    int soma = 0;
    

    cout << "Digite o primeiro valor: \n";
    cin  >> valor1;
    cout << "Digite o segundo valor: \n";
    cin  >> valor2;

    soma = somaNumeros(valor1, valor2);
    cout << "A soma de " << valor1 << " + " << valor2 << " é " << soma;  

}