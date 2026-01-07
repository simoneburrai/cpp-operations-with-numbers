// Dati due numeri interi a e b in input, scambia i loro valori 
//senza utilizzare una terza variabile temporanea.

#include <iostream>

using namespace std;

int main(){
    int a;
    int b;
    cout << "Inserisci un numero";
    cin >> a;
    cout << "Inserisci un altro numero";
    cin >> b;

    cout << "Variabile a " << a << endl;
    cout << "Variabile b " << b << endl;
    a = a+b;
    b = a-b;
    a -= b;
    cout << "Variabile a " << a << endl;
    cout << "Variabile b " << b << endl;
}


