#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    float peso = 0;
    float altura = 0;

    cout << "Digite seu peso em kg:\n";
    cin  >> peso;

    cout << "Digite sua altura em metros:\n";
    cin  >> altura;

    float imc= peso / (altura * altura);
    cout << fixed << setprecision(2);
    cout << "Seu IMC é : " << imc << endl;

    if (imc < 17)
        cout << "Muito abaixo do peso";
    else if ( imc >= 17 && imc < 18.5)
        cout << "Abaixo do peso";
    else if (imc >= 18 && imc < 25)
        cout << "Peso ideal";
    else if (imc >= 25 && imc < 30)
        cout << "Sobrepeso";
    else if (imc >= 30 && imc < 35)
        cout << "Obesidade";
    else if (imc >= 35 && imc < 40)
        cout << "Obesidade severa";
    else
        cout << "Obesidade mórbida";



    
}