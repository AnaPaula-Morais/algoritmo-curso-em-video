#include <iostream>
#include <iomanip>

using namespace std;

int main (){

    // Homens mais de 18 com cabelo castanho e mulheres entre 25 e 30 anos, loiras.

    cout << "===========================" << endl;
    cout << "     SELETOR DE PESSOAS    " << endl;
    cout << "===========================" << endl;

    char sexo = ' ';
    int idade = 0;
    int corCabelo = 0;
    char continuar = ' ';
    int totalHomens = 0;
    int totalMulheres = 0;

    do {
        cout << "Qual seu sexo? [M/F] " << " ";
        cin  >> sexo;
        sexo = toupper(sexo);

        cout << "Qual sua idade? " << " ";
        cin  >> idade;

        cout << "Cor do cabelo? " << " " << endl;
        cout << "---------------------------" << endl;
        cout << "[1] Preto" << endl;
        cout << "[2] Castnho" << endl;
        cout << "[3] Loiro" << endl;
        cout << "[4] Ruivo" << endl;
        cin  >> corCabelo;
        cout << endl; 

        if (sexo == 'M' && idade > 18 && corCabelo == 2) {
            totalHomens++;
        }
        else if (sexo == 'F' && idade > 25 && idade < 30 && corCabelo == 3) {
            totalMulheres++;
        }

        cout << "Quer continuar? [S/N] " << " ";
        cin  >> continuar;
        continuar = toupper(continuar); 

    } while (continuar == 'S');

    cout << "Total de homens com mais de 18 anos e cabelo castanho é " << totalHomens << endl;
    cout << "Total de mulheres entre 25 e 30 anos e cabelo loiro é " << totalMulheres << endl;
    

}