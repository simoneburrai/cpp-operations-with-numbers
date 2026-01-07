// Chiedi all'utente le coordinate di due punti nel piano cartesiano: p1(x_1, y_1) e p2(x_2, y_2).
//  Calcola la distanza euclidea tra di loro.

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int point1[2];
    int point2[2];

    cout << "Inserire le coordinate del primo punto\n";
    cout << "x1 uguale a: \n";
    cin >> point1[0];
    cout << "y1 uguale a: \n";
    cin >> point1[1];

    cout << "Inserire le coordinate del secondo punto\n";
    cout << "x2 uguale a: \n";
    cin >> point2[0];
    cout << "y2 uguale a: \n";
    cin >> point2[1];
    
    float distance = sqrt(pow((point1[0] - point2[0]), 2) + pow((point1[1] - point2[1]), 2));

    cout << "La distanza fra i due punti nel piano cartesiano è " << fixed << setprecision(2) << distance;
}