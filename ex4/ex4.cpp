// Invece di usare l'operatore modulo % 2, scrivi una funzione che determini se un numero 
// è pari o dispari utilizzando l'operatore bitwise AND (&).

#include <iostream>

using namespace std;

int main() {


    int number;


    cout << "Insert a number";
    cin >> number;
    const int binaryNumber = number & 1;
    const bool isEven = !binaryNumber;

    cout << boolalpha;
    cout << "The number is even: " << isEven;
}