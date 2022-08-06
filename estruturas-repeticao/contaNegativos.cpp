#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    int num = 0;
    int contador =1;
    int totalNeg = 0;
    
    do {
        cout << "Digite um número:\n";
        cin  >> num;
        if (num < 0)
            totalNeg = totalNeg + 1;
        contador = contador + 1;
    } 
    while (contador <= 5);
   cout << "Foram digitdos " << totalNeg << " números negativos"; 
}
