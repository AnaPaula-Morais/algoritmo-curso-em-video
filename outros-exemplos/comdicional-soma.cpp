#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    // Faça um algoritmo que leia os valores A, B, C e imprima na tela se a soma de A + B é menor que C

    int num1 = 0, num2 = 0, num3 = 0;

    cout << "Digite três números separados por um enter\n";
    cin  >> num1 >> num2 >> num3;

    if (num1 + num2 < num3)
        cout << "A soma de " << num1 << " + " << num2 << " é menor que " << num3;
    else
        cout << "A soma de " << num1 << " + " << num2 << " não é menor que " << num3;

}