#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    
    int numDigitado = 0;
        
    do {
        cout << "=================" << endl;
        cout << "|      MENU     |" << endl;
        cout << "=================" << endl;
        cout << "| [1] De 1 a 10 |" << endl;
        cout << "| [2] De 10 a 1 |" << endl;
        cout << "| [3] De SAIR   |" << endl << endl;
        cin  >> numDigitado;
    
        
        if (numDigitado == 1) {
            int contador = 1;
            // for (int i = 1; i <= 10; i++){
            //     cout << i << " " << "..." << endl;
            // }
            do {
                cout << contador++ << "...";
            } while (contador <= 10);
            cout << endl;
        }
        else if (numDigitado == 2){
            int contador = 10;
            // for (int i = 10; i >=1; i--){
            //     cout << i << "..." << endl;
            // }
            
            do {
                cout << contador-- << "...";
            } while (contador >= 1);
            cout << endl;
        }   
        
    } while (numDigitado < 3 && numDigitado > 0);
        cout << "Saiu do programa" << endl;
    

  
    

    
   
   
   
   
  

}