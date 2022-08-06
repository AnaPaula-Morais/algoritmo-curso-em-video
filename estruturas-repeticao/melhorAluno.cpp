#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    int quantAlunos = 0;
    string nomeAluno = "";
    float notaAluno = 0;
    int contadorAluno = 0;
    float notaMaior = 0;
    string melhorAluno = "";
    
    
    cout << "Quantos alunos tem na turma?" << " ";
    cin  >> quantAlunos;
    
    while (contadorAluno < quantAlunos) {
        cout << "Nome do aluno: "; 
        cin  >> nomeAluno;
        cout << "Nota de " << nomeAluno << ": ";
        cin  >> notaAluno;
        contadorAluno++;
    
    if (notaAluno > notaMaior){
        notaMaior = notaAluno;
        melhorAluno = nomeAluno;
        }
    }

    cout << "A melhor nota foi a de " << melhorAluno << endl << notaMaior;
    
    
    


}