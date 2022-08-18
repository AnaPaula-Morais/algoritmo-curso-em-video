#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    string nome [4];
    float nota1 [4];
    float nota2 [4];
    float media [4];
    float somaMedia = 0, mediaTurma = 0;
    int totalAlunos = 0;
    for (int i = 0; i < 4; i++){
       cout << "Aluno " << (i+1) << endl;
       cout << "Nome: ";
       cin  >> nome[i];
       cout << "Primeira nota: ";
       cin  >> nota1[i];
       cout << "Segunda nota: ";
       cin  >> nota2[i];
       media[i] = (nota1[i] + nota2[i]) / 2;
       somaMedia = somaMedia + media[i];

    }
    mediaTurma = somaMedia / 4;
    system("clear");
    cout << "LISTAGEM DE ALUNOS" << endl;
    cout << "----------------------------" << endl;
    for (int i = 0; i < 4; i++){
        cout << nome[i] << " " << media[i] << endl;
        if (media[i] > mediaTurma) {
            totalAlunos++;
        }
    }
    cout << "Ao todo temos " << totalAlunos << " acima da média da turma que é " << mediaTurma;
}