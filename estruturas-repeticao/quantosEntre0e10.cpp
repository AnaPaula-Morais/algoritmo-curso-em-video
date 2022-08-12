#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    int total = 0;
    int valor = 0;
    int somaImpares = 0;
    for (int i = 1; i <= 6; i++){
      cout << "Digite um valor: \n";
      cin  >> valor;
        if(valor >= 0 && valor <= 10)
           total = total + 1;
        // else if (valor % 2 = 1)
        //    somaImpares = somaImpares + valor; 
    }
    cout << "Ao todo foram " << total << " valores entre 0 e 10";
}
