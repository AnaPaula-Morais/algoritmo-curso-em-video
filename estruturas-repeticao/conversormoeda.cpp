#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    float real = 0;
    int cont = 1;
    int quant = 0;

    cout << "Quantas vezes você quer converter?\n";
    cin  >> quant; 
while (cont <= quant) {
    cout << "Quantos reais eu tenho?\n";
    cin  >> real;
    float dolar = real / 5.80F;
    cout << fixed << setprecision(2); 
    cout << "Posso ter " << dolar << " dolares" << endl;

    cont = cont +1;
}




}