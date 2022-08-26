#include <iostream>
#include <iomanip>

using namespace std;
string fileira [10];
int cad = 0;
char novaReserva = ' ';


void mostrarFileira (){
    for (int i = 0; i < 10; i++){
        if (fileira[i] == ""){
            cout << "[B " << i + 1 << "]";        
        }else {
            cout << "[---]";
        }
    }
    cout << endl;
    cout << "----------------------------------------------------" <<  endl;
}


int main () {
    do{
        system("cls");
        mostrarFileira();
        cout << "Reservar a cadeira: B";
        cin  >> cad;
        cout << endl;
        if (fileira[cad] == ""){
            fileira[cad -1] = "X";
            mostrarFileira();
            cout << "Cadeira B" << cad << " RESERVADA!";

        }else{
            cout << "ERRO: Lugar ocupado";
        }
        cout << "Quer reservar outro? [S/N] ";
        novaReserva = toupper(novaReserva);
        cin  >> novaReserva;

     
        
    } while (toupper(novaReserva) == 'S');
    
    
}
    