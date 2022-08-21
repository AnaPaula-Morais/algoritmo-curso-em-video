#include <iostream>
#include <iomanip>

using namespace std;

int main (){    
    // Cadastrar as questões
    // Cadastrar as respostas dos alunos

    string gabarito[5];
    string respostasAlunos[5];
    string nome1 = "";
    string nome2 = "";
    string nome3 = "";


    cout << "Passo 1 - Cadastro de Gabarito" << endl;
    cout << "------------------------------ " << endl;

    for (int i = 0; i < 5; i++){
        cout << "Questão " << (i + 1) << ": ";
        cin  >> gabarito[i];
    }
    system("clear");

   

    for (int i = 0; i < 3; i++){
        cout << "--------------------------" << endl;
        cout << "          Aluno " << (i+1) <<  endl;
        cout << "--------------------------" << endl;
        cout << "Nome: ";  
        cin  >> nome1;
        cout << "Respostas Dadas" << endl;
        for (int i = 0; i < 5; i++){
            cout << "Questão " << (i + 1) << ": ";
            cin  >> respostasAlunos[i];
        }
        system("clear");
    }
    
    
}