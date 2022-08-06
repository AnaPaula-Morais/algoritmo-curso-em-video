#include <iostream>
#include <iomanip>

using namespace std;

int main (){
float real = 0; 

cout << "Quantos reais eu tenho?\n";
cin  >> real;

float dolar = real / 5.50F;
cout << fixed << setprecision(2); 
cout << "Posso ter " << dolar << " dolares" << endl;


}
