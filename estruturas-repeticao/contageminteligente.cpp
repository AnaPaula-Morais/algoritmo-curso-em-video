#include <iostream>
#include <iomanip>

using namespace std;

int main (){

    int num1 = 0, num2 = 0, numNovo = 0;

    cout << "Digite dois números inteiros\n";
    cin  >> num1 >> num2;
    numNovo = num1;

    while (numNovo <= num2){
       cout << numNovo << endl;
       numNovo = numNovo + 1;
    }
    
    while (num1 >= num2) {
        cout << num1 << endl;
        num1--;
    }
    
    
}
