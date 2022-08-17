#include <iostream>
#include <iomanip>

using namespace std;

int soma (int a, int b) {
    cout <<"Recebi o valor " << a << endl;
    cout <<"Recebi o valor " << b << endl;
    cout <<"A soma entre os dois é " << a + b;
}

int main (){
   int x = 5, y = 3;

   soma (x,y); 
 
}