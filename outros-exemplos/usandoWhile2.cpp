#include <iostream>
#include <iomanip>

using namespace std;

int main (){
// Faça um programa que implemente um menu onde o usurário deverá selecionar 1 ou 0. Caso seja entrado um número diferente, o programa deverá solicitar uma nova opção. 

    // Usuário vai escolher uma opçao 1 ou 0
    int num = 0;
    cout << " Escolha uma opção 0 ou 1\n";
    cin  >> num;

    // Opção diferente de 1 ou 0, será pedido nova opção
    while (num != 1 && num != 0) {
        cout << "Digite outra opção\n";
        cin  >> num;
    }
    // A opção exolhida for 1 ou 0, sistema acaba

    


}