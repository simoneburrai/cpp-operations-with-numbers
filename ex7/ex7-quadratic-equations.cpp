// Chiedi all'utente i coefficienti a, b, c di un'equazione ax^2 + bx + c = 0. 
// Calcola il discriminante (Delta = b^2 - 4ac) e determina se le radici sono reali 
// o immaginarie. Se reali, calcola x1 e x2.

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    int a;
    int b;
    int c;
    float x1;
    float x2;
    cout << "Calcoliamo i risultati di un equazione di secondo grado in formato ax^2 + bx + c\n";
    cout << "Inserire il valore di a\n";
    cin >> a;
    cout << "Inserire il valore di b\n";
    cin >> b;
    cout << "Inserire il valore di c\n";
    cin >> c;

    float delta = (b*b) - (4*a*c);
    if(delta < 0){
        cout << "Il delta è minore di 0, non è possibile calcolare il risultato per numeri reali\n";
    }else {
        x1 = (-1*b + sqrt(delta))/ (2*a);
        x2 = (-1*b - sqrt(delta))/ (2*a);
        cout << "Il risultato dell'equazione di secondo grado è x1 = " 
        << fixed << setprecision(2) << x1 
        << "\n e x2 = " << fixed << setprecision(2) << x2;
    }

}