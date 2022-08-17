#include <iostream>
#include <iomanip>

using namespace std;

void topo (float maior) {
    system("clear");
    cout << "---------------------------" << endl;
    cout << "     DETECTOR DE PESADO    " << endl;
    cout << "Maior peso até agora " << maior << "kg" << endl;
    cout << "---------------------------" << endl;
}

int main (){
    string pesado = ""; 
    string nome = "";
    float maior = 0, peso = 0;

    topo (maior);

    for (int i = 1; i < 5; i++){
        cout << "Digite seu nome: \n";
        cin  >> nome;

        cout << "Digite o peso de " << nome << ": \n";
        cin  >> peso;

        if (peso > maior) {
            maior = peso;
            pesado = nome;
        }
        topo (maior);

    }
    topo (maior);
    cout << "A pessoa mais pesada foi " << pesado << " com " << maior << " kg";
    
}