#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    // Ler 7 valores e mostrar quantos são pares e mostrar as posições dos valores pares.

    int vetor [7];
    int totalPar = 0;
    for (int i = 0; i < 7; i++){
        cout << "Digite o " << (i+1) << " valor: ";
        cin  >> vetor[i];

        if (vetor[i] % 2 == 0) {
            totalPar++;
        }
    }
    cout << "O total de pares foi " << totalPar << endl;

    for (int i = 0; i < 7; i++){
        if (vetor[i] % 2 == 0){
            cout << "Valor par na posição " << i << endl;
        }
        
    }
    
}