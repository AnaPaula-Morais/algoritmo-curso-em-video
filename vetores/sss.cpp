#include <iostream>
#include <iomanip>

using namespace std;


int main (){

    char continuar = ' ';

    cout << "Deseja continuar [S] ou [N]: ";
    cin  >> continuar;

    while (toupper(continuar) == 'S'){
        cout << "Deseja continuar [S] ou [N]: ";

        cin  >> continuar;
    }
}