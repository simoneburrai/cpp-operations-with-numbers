// Ricevi in input i due cateti di un triangolo rettangolo. 
// Calcola l'ipotenusa usando il Teorema di Pitagora.
// Mostra il risultato con esattamente 3 cifre decimali.

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    double first_cathetus;
    double second_cathetus;

    cout << "Inserire il valore del primo cateto" << endl;
    cin >> first_cathetus;

    cout << "Inserire il valore del secondo cateto" << endl;
    cin >> second_cathetus;

    const double ipotenuse = sqrt((pow(first_cathetus, 2) + pow(second_cathetus, 2)));

    cout << "Il valore dell'ipotenusa è " << fixed << setprecision(3) << ipotenuse;
}