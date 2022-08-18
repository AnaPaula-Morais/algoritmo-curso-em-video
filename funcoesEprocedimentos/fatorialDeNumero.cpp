#include <iostream>
#include <iomanip>

using namespace std;

int fatorial (int valor) {
    int i = 1;
    for ( /*declarar*/; valor > 1; valor--/*executa por ultimo a cada ciclo*/ ){
        i = i * valor;   
        
    }

    return i;
    
}

int main () {
    int numero = 0;
    int f = 0;

    cout << "Digite um número: \n";
    cin  >> numero;

    f = fatorial(numero);
    
    cout << "O valor de " << numero << "!" << " é igual a " << f;
}
