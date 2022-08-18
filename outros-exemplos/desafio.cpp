#include <stdio.h>
#include <iostream>


using namespace std;

void update (int a, int b) {
    int c;
    c = a + b;
    b = abs(a - b);
    cout << c << endl;
    cout << b;
}

int main() {
    int a = 0, b = 0;

    cin >> a;
    cin >> b;

    update(a,b);
  
}