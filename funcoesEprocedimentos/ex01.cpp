#include <iostream>
#include <iomanip>

using namespace std;


void soma (int a, int b){
    a = a + 1;
    b = b + 2;

    cout << "Valor de A = " << a << endl;
    cout << "Valor de B = " << b << endl;
    cout << "Soma A + B = " << a + b << endl;
}


int main (){
    int x = 4;
    int y = 8;

    soma (x,y);
    cout << "Valor de X = " << x << endl;
    cout << "Valor de Y = " << y << endl;
 
}

   