#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    int matriz[3][2];

    for (int linha = 0; linha < 3; linha++){
        for (int coluna = 0; coluna < 2; coluna++){
        cout << "Digite um valor da posição " << "[" << linha << "]" << "[" << coluna << "]: ";
        cin  >> matriz [linha][coluna];
        }
        
    }
    for (int linha = 0; linha < 3; linha++) {
       for (int coluna = 0; coluna < 2; coluna++){
            cout << matriz[linha][coluna] << " ";
            
       }
      cout << endl; 
    }
    
    
}
   
