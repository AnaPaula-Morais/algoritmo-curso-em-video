#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    int soma = 0;
    int valor = 0;
    char resposta = ' ';

    do {
        cout << "Digite um valor:\n";
        cin  >> valor;
        soma = soma + valor;
        cout << "Voce quer continuar? [S/N]\n";
        cin  >> resposta;
        resposta = toupper(resposta);

    } 
    while (resposta == 'S');
        cout << "A soma de todos os valores digitados é " << soma;
    
}