#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    int vetor [10];
    for (int i = 0; i < 10; i++){
        cout << "Digite o " << i << "o. valor: ";
        cin  >> vetor[i];
    }
    
    for (int i = 0; i < 10; i++){
        cout << "[" << vetor[i] << "]";
    }
    cout << endl;

}