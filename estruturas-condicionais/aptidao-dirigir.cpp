#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    
    cout << "-----------------------------------" << endl;
    cout << "Departamento de transito" << endl;
    cout << "-----------------------------------" << endl << endl;

    int anoAtual = 0;
    int anoNasc = 0;
    cout << "Digite o ano atual:" << endl;
    cin  >> anoAtual;

    cout << "Digite seu ano de nascimento:" << endl;
    cin  >> anoNasc;

    int idade = anoAtual - anoNasc;

    if (idade >=18)
        cout << "Você está apto a dirigir";
    else
        cout << "Você ainda não tem idade para dirigir.";


}