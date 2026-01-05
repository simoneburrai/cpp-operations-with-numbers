// Ricevi un numero double in input. Senza usare round(), 
// scrivi una logica che lo arrotondi all'intero più vicino.

#include <iostream>

using namespace std;

int main() {

    double input_number ;

    cout << "Inserire un numero con la virgola, verrà arrotondato";

    cin >> input_number;

    int int_number = input_number;

    double resto = input_number - int_number;

    if(resto > 0.5){
        int_number += 1;
    }

    cout << "Il numero inserito è " << input_number << endl;
    cout << "Il numero arrotondato è " << int_number << endl;
}