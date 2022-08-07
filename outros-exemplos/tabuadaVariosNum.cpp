#include <iostream>
#include <iomanip>

using namespace std;

void imprimeTabuadaDo(int num) {
    cout << "=======================" << endl;
    cout << "     Tabuada de " << num << endl;
    cout << "=======================" << endl;

    for (int i = 1; i <= 10; i++) {
        int resultado = i * num;
        cout << num << " x " << i << " = " << resultado << endl;
    }
}

int main (){
    int cont = 1;


   while (cont <= 10) {
        imprimeTabuadaDo (cont); 
        cont++;
   }
   imprimeTabuadaDo(30);

    // for (int i = 1; i <= 9; i++){
    //     for (int j = 1; j <= 10; j++){
    //         cout << i << " * " << j << " = " << i*j << endl;    
    //     }
    //     cout << endl;
    // }
    
    

    
    
}