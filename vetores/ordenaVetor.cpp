#include <iostream>
#include <iomanip>

using namespace std;

int main (){
   int vetor [4];
   int troca = 0;

   for (int i = 0; i < 4; i++){
        cout << "Digite um valor: ";
        cin >> vetor[i];
   }
    for ( int i = 0; i < 4; i++){
        for (int j = i + 1; j < 4 ; j++){
            if(vetor[i] > vetor[j]) {
                troca = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = troca;
            }
        }
        
    }
    for (int i = 0; i < 4; i++){
        cout << "[" << vetor[i] << "]";
    }
    
}