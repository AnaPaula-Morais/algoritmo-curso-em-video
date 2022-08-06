#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    float nota1 = 0, nota2 = 0, nota3 = 0, nota4 = 0;

    cout << "Digite as quatro notas seguidas de um enter:\n";
    cin  >> nota1 >> nota2 >> nota3 >> nota4;

    float media = (nota1 + nota2 + nota3 + nota4) / 4;

    cout << "A média do aluno foi: " << media << endl;
    
    if (media >= 7)
        cout << "Paarabens, você foi aprovado!";
    else if (media >= 5 && media < 7)
        cout << "Aluno em RECUPERAÇÃo";
    else
        cout << "Aluno REPROVADO";

}