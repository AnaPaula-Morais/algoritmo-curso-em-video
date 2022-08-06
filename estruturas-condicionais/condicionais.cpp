#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    int anoAtual = 0;
    int anoNascimento = 0;
    
    cout << "Em que ano estamos?\n";
    cin  >> anoAtual;
    cout << "Em que ano você nasceu?\n";
    cin  >> anoNascimento;
    
    int idade = anoAtual - anoNascimento;

    cout << "Em " << anoAtual << " você terá " << idade << " anos";
    
    if (idade >= 21)
        cout << " e ja terá atingido a maioridade";
}
