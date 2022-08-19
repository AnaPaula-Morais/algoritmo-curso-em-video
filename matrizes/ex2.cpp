#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    // Ler uma matriz 3x3 e mostrar os pares

    int matriz [3][3];
    int totalPar = 0; 

    for (int linha = 0; linha < 3; linha++){
        for (int coluna = 0; coluna < 3; coluna++){
            cout << "Digite o valor na pocição " << "[" << linha << "]" << "[" << coluna << "]: ";
            cin  >> matriz[linha][coluna];
        }
        
    }
    for (int linha = 0; linha < 3; linha++){
        for (int coluna = 0; coluna < 3; coluna++){
            if (matriz[linha][coluna] % 2 == 0){
                cout << "{" << matriz[linha][coluna] << "}";
                totalPar++;
            }else
                cout << matriz[linha][coluna] << " ";
        }
        cout << endl;
    }
    cout << "Ao todo foram digitados " << totalPar << " valores PARES";
    
}