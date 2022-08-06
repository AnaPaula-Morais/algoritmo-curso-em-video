#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    int num1 = 0;

    cout << "DIgite um número qualquer\n";
    cin  >> num1;

    if (num1 % 2 == 0)
        cout << "O número " << num1 << " é par";
    else 
        cout << "O número " << num1 << " é ímpar";
}