#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;





int main (){
    // Preencher uma matriz de 4 ordem
    // Soma dos valores da diagonal principal
    // Produto entre os valores da segunda linha
    // O maior valor da terceira coluna

    int matriz [4][4];
    int somaDP = 0;
    int produto2linha = 1;
    int maiorValor3Coluna = 0;

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
    
    for (int coluna = 0; coluna < 4; coluna++){
        produto2linha = produto2linha * matriz[2][coluna];
    }
    for (int linha = 0; linha < 4; linha++){
        if(matriz[3][linha] > maiorValor3Coluna){
            maiorValor3Coluna = matriz[3][linha];        
            }
    }
    
    cout << "A soma dos valores da diagonal principal é " << somaDP << endl;
    cout << "O produto dos valores da segunda linha é " << produto2linha;
    cout << "O maior valor da terceira coluna é " << maiorValor3Coluna;

    


}