#include <iostream>
#include <iomanip>

using namespace std;


int main (){    
    // Cadastrar as questões
    // Cadastrar as respostas dos alunos
    // Apresentar a nota final de cada aluno
    // Apresentar a média da turma
    
        
    string gabarito[5];
    string respostasAluno1[5];
    string respostasAluno2[5];
    string respostasAluno3[5];
    string nome1 = "";
    string nome2 = "";
    string nome3 = "";
    float  notaAluno1 = 0;
    float  notaAluno2 = 0;
    float  notaAluno3 = 0;
    float media = 0;


    cout << "Passo 1 - Cadastro de Gabarito" << endl;
    cout << "------------------------------ " << endl;

    for (int i = 0; i < 5; i++){
        cout << "Questão " << (i + 1) << ": ";
        cin  >> gabarito[i];
    }
    system("clear");
   
    cout << "--------------------------" << endl;
    cout << "          Aluno 1          " <<  endl;
    cout << "--------------------------" << endl;
    cout << "Nome: ";  
    cin  >> nome1;
    cout << "Respostas Dadas" << endl;
    for (int i = 0; i < 5; i++){
        cout << "Questão " << (i + 1) << ": ";
        cin  >> respostasAluno1[i];
        
        if (gabarito[i] == respostasAluno1[i]){
            notaAluno1 = notaAluno1 + 2;
        }
           
    }
    system("clear");
     
    cout << "--------------------------" << endl;
    cout << "          Aluno 2         " << endl;
    cout << "--------------------------" << endl;
    cout << "Nome: ";  
    cin  >> nome2;
    cout << "Respostas Dadas" << endl;
    for (int i = 0; i < 5; i++){
        cout << "Questão " << (i + 1) << ": ";
        cin  >> respostasAluno2[i];
        
        if (gabarito[i] == respostasAluno2[i]){
            notaAluno2 = notaAluno2 + 2;
        }
        
    }
    system("clear"); 

    cout << "--------------------------" << endl;
    cout << "          Aluno 3         " << endl;
    cout << "--------------------------" << endl;
    cout << "Nome: ";  
    cin  >> nome3;
    cout << "Respostas Dadas" << endl;
    for (int i = 0; i < 5; i++){
        cout << "Questão " << (i + 1) << ": ";
        cin  >> respostasAluno3[i];
        if (gabarito[i] == respostasAluno3[i]){
            notaAluno3 = notaAluno3 + 2;
        }
    }
    system("clear");  
    cout << nome1 << "     " << notaAluno1 << endl;
    cout << nome2 << "     " << notaAluno2 << endl;
    cout << nome3 << "     " << notaAluno3 << endl;
    cout << "-------------------------------------" << endl;
    cout << "Média da turma: " << (notaAluno1 + notaAluno2 + notaAluno3) / 3;



    

    
    
   
    

    
}
   
    
