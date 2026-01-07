// Scrivi un programma che riceva in input un numero intero positivo
//  di tre o quattro cifre e ne calcoli la somma delle singole cifre.
// Sfida: Usa solo gli operatori modulo % e divisione intera /.

#include <iostream>

using namespace std;

int main() {

    unsigned int input_number;

    cout << "Insert a number with 3 or more digits" << endl;

    cin >> input_number;
    unsigned int result = 0;

    while(input_number > 0){
       result  += (input_number % 10);
        input_number  /= 10;
        cout << input_number << " input number " << endl;
    }


    cout << "The sum of all digits is " << result;
    return 0;
}