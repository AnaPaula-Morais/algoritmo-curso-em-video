#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    string nome = "";
    float salario = 0;
    int dependentes = 0;
    

    cout << "Qual o nome do funcionário?\n";
    cin  >> nome;

    cout << "Qual o salário do funcionário?\n";
    cin  >> salario;

    cout << "Qual a quantidade de dependentes?\n";
    cin  >> dependentes;

    switch (dependentes)
    {
    case 0:
        cout << "O novo salário é " << salario + (salario * 5 / 100);
        break;
    case 1:
    case 2:
    case 3:
        cout << "O novo salário é " << salario + (salario * 10 / 100);
        break;
    case 4:
    case 5:
    case 6:
        cout << "O novo salário é " << salario + (salario * 15 / 100);
    default:
        cout << "Para mais de 6 dependentes o novo salário é " << salario + (salario * 18 / 100);
        break;
    }


}