#include <iostream>
#include <iomanip>

using namespace std;

int main (){

    int cont = 1, n = 0, soma = 0, maior = 0; // maior valor digitado

    while (cont <=5) {
        cout << "Digite o " << cont << "o. valor:\n";
        cin  >> n;
        if (n > maior)
          maior = n;
        soma = soma + n;
        cont = cont + 1;
        
    }
    cout << "A soma de todos os valores foi " << soma << endl;
    cout << "O maior valor digitado foi " << maior;
    
}

