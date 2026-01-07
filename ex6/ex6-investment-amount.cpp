// Scrivi un programma per calcolare il montante finale di un investimento. 
// L'utente inserisce il capitale iniziale (P), il tasso di interesse annuo (r) 
// e il numero di anni (t)).

//A = P(1 + r)^t
#include <iostream>
#include <cmath>
#include <iomanip>

int main(){

    double initial_money;
    double interest_rate;
    unsigned int years;

    std::cout << "Inserisci il capitale iniziale per l'investimento";
    std::cin >> initial_money;

    std::cout << "Inserisci il tasso d'interesse";
    std::cin >> interest_rate;

    std::cout << "Inserisci gli anni per l'investimento";
    std::cin >> years;

    float investment_amount = initial_money * pow((1 + interest_rate), years);

    std::cout  << "Il montante finale per il tuo investimento è di €  " << std::fixed << std::setprecision(2) << investment_amount;
}