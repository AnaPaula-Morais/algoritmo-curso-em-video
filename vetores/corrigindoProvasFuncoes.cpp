#include <iostream>
#include <iomanip>

using namespace std;

string gabarito[5];
string prova[5];
string nome[3];
float nota[3];
float soma = 0;
float media = 0;

void cadastarGabarito(){
    cout << "Passo 1 - Cadastro de Gabarito" << endl;
    cout << "------------------------------" << endl;
    for (int i = 0; i < 5; i++){
        cout << "Questão " << (i + 1) << ": ";
        cin  >> gabarito[i];
    }
    
}

float cadastraProva(float notaFinal){
    notaFinal = 0;
    cout << "Respostas dadas" << endl;
    for (int i = 0; i < 5; i++){
        cout << "Questão " << (i+1) << ": ";
        cin  >> prova[i];
        if (gabarito[i] == prova[i]){
            notaFinal = notaFinal + 2;
        }
    }
    return(notaFinal);

}

int main (){
    cadastarGabarito();
    for (int i = 0; i < 3; i++){
        system("clear");
        cout << "--------------------------" << endl;
        cout << "          Aluno " << (i + 1)<< endl;
        cout << "--------------------------" << endl;
        cout << "Nome: ";  
        cin  >> nome[i];
        nota[i] = cadastraProva(i);
        soma = soma + nota[i];
    }
    system("clear");

    cout << "Notas Finais" << endl;
    cout << "------------------" << endl;
    for (int i = 0; i < 3; i++){
        cout << nome[i] << "  " << nota[i] << endl;
    }
    media = soma/3;
    cout << "------------------" << endl;
    cout << "Média da turma: " << media;

}
