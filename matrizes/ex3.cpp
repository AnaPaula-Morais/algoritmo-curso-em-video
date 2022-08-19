#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    // Criar uma matriz identidade de 3 ordem.
    int matrizIdentidade [3][3];

    for (int linha = 0; linha < 3; linha++){
        for (int coluna = 0; coluna < 3; coluna++){
            if (linha == coluna){
               matrizIdentidade[linha][coluna] = 1; 
            }else
                matrizIdentidade[linha][coluna] = 0;
        }
        
    }
    
    for (int linha = 0; linha < 3; linha++){
        for (int coluna = 0; coluna < 3; coluna++){
            cout << matrizIdentidade[linha][coluna] << " ";
        }
        cout << endl; 
    }
    

}