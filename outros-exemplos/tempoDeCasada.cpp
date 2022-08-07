#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    // Faça um algoritmo que leia o nome, o sexo e o estado civil de uma pessoa. Caso sexo seja “F” e
    // estado civil seja “CASADA”, solicitar o tempo de casada (anos).
    string nome = "";
    char sexo = ' ';
    char estadoCivil = ' ';
    int anosCasada = 0;

    cout << "========================" << endl;
    cout << "|    DADOS PESSOAIS    |" << endl;
    cout << "========================" << endl;

    cout << "Digite seu nome:" << " " << endl;
    getline(cin,  nome);

    cout << "-------------------------------" << endl;

    cout << "Digite seu sexo [F/M]:" << " " << endl;
    cin  >> sexo;
    sexo = toupper(sexo);

    cout << "-------------------------------" << endl;

    cout << "Digite seu seu estado civil [C - casado(a)] [S - solteiro(a)] [D - divorciado(a)] [V- viúvo(a)]:" << " " << endl;
    cin  >> estadoCivil;
    estadoCivil = toupper(estadoCivil);

    if (sexo == 'F' && estadoCivil == 'C'){
        cout << "Quantos anos de casada? ";
        cin  >> anosCasada;
        cout << endl;
    }
    cout << "Obrigada pelas informações.";


}
