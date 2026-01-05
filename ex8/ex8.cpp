// Scrivi un programma che verifichi se un numero intero inserito
//  dall'utente è una potenza di 2 (es. 2, 4, 8, 16...).

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int input_number;
    cout << "Inserire un numero";
    cin >> input_number;
    int result = input_number;
    int counter= 0;

    while(result > 0){
        
        if(result % 2 != 0){
            cout << "Il numero non è una potenza di due";
            break;
        }else{
            counter += 1;
        }
        
        if(result == 2){
            cout <<"Il numero è una potenza di due, è uguale a 2 elevato " << counter <<endl;
            break;
        }
        result = result / 2;
    }

    return 0;
    
}