#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    // Ler o nome de tres times
    // Tabela de jogos com a combinação que pode existir entre esses três times, sem repetições.

    string time[3];

    cout << "============================" << endl;
    cout << "    Campeonato de Futebol   " << endl;
    cout << "============================" << endl;
    for (int i = 0; i < 3; i++){
        cout << "Nome do " << (i+1) << "o. time: ";
        cin  >> time[i];   
    }
    system("clear");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (i != j){
                cout << time[i] << " [ ] X  [ ] " << time[j] << endl;
            }
        }
            
    }

}