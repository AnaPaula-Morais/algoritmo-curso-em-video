#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    int cont = 1;
    int num = 0;
    int resultado = 0;

    cout << "Quer ver a tabuada de qual número?\n";
    cin  >> num;
    do { 
        resultado = num * cont;
        cout << num << " x " << cont << " = " << resultado << endl;
        cont = cont + 1;
    } while (cont <= 10);
    

}