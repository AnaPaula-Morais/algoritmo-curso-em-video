#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    int doacao = 0;
    float valorDoado = 0;
    
    cout << "------------------------------------"<< endl;
    cout << "         Criança Esperança" << endl;
    cout << "------------------------------------" << endl;
    cout << "     Muito obrigado por ajudar" << endl << endl;
    cout << "  [1] para doar R$10" << endl;
    cout << "  [2] para doar R$25" << endl;
    cout << "  [3] para doar R$50" << endl;
    cout << "  [4] para doar outros valores" << endl;
    cout << "  [5] para cancelar" << endl;

    
    cin >> doacao;
    switch (doacao) {
    case 1:
        cout << "Valor doado foi 10 rais";
        break;
    case 2:
        cout << "Valor doado foi 25 rais";
        break;
    case 3:
        cout << "Valor doado foi 50 rais";
        break;
    case 4:
        cout << "Qual o valor da doação?\n";
        cin  >> valorDoado;
        cout << "O valor doado foi " << valorDoado << " Obrigada!" << endl;
        break;
    case 5:
        cout << "Valor foi 0";
        break;
    
    default:
        break;
    }
    
   
}