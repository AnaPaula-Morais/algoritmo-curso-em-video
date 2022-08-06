#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    int num = 0;
    int contagem = 1;
    int contadorDiv= 0;
    
    cout << "Escreva um número:\n";
    cin  >> num;

    do {
        if (num % contagem == 0)
            contadorDiv = contadorDiv + 1;
        contagem = contagem + 1;  
    } 
    while (contagem <= num);
        if (contadorDiv > 2 ) {
           cout << "O valor " << num << " não é primo."; 
        } else
           cout << "O valor " << num << " é primo."; 
        
}