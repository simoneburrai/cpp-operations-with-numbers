// Crea un programma che riceva un numero intero 
// rappresentante un totale di secondi e lo
//  converta nel formato HH:MM:SS (Ore, Minuti, Secondi).

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int all_seconds;
    cout << "Insert a number, it will be converted in this format HH:MM:SS";
    cin >> all_seconds;
    //input example = 4600;
    int hours = all_seconds / 3600;
    int remaining_seconds = all_seconds % 3600;
    int minutes = remaining_seconds / 60;
    int seconds = remaining_seconds % 60;


    cout << setw (2) << setfill ('0')<< hours << ":"
         << setw (2) << setfill ('0') << minutes << ":" 
         << setw (2) << setfill ('0') << seconds;
}