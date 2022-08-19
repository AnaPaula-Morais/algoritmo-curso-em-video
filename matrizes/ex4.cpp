#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    // Preencher uma matriz de 4 ordem
    // Soma dos valores da diagonal principal
    // Produto entre os valores da segunda linha

    int matriz [4][4];
    int somaDP = 0;

    for (int linha = 0; linha < 4; linha++){
        for (int coluna = 0; coluna < 4; coluna++){
            cout << "Digite o valor da posição " << "[" << linha << "]" << "[" << coluna << "]: ";
            cin  >> matriz[linha][coluna];
            if (linha == coluna){
                somaDP = somaDP + matriz[linha][coluna];
            }
            
        }    
    }
    for (int linha = 0; linha < 4; linha++){
        for (int coluna = 0; coluna < 4; coluna++){
            cout << matriz[linha][coluna] << " ";
        }
        cout << endl;
    }
    
    cout << "A soma dos valores da diagonal principal é " << somaDP;
    

}