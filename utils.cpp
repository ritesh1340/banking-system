#include "utils.h"
#include <sstream>
#include <iostream>
#include <string>
using namespace std ; 

utils::utils()
{

}

Balance utils::inputBalance() {
    cout << "Enter Amount" << endl ; 
    
    cin.ignore();
    string inputAmount;
    getline(cin, inputAmount); 

    stringstream sin(inputAmount) ; 
    
    Balance amount;
    string word ; 

    while (sin >> word) {
        if (word.back() == 'D') {
            word.pop_back();
            amount.dollars = stoi(word) ;
        } else {
            word.pop_back();
            amount.cents = stoi(word);
        }
    }
    
    return amount;
}

Balance utils::convertCentsToBalance(long long cents) {
    Balance finalBalance;
    finalBalance.dollars = cents/100;
    if ( finalBalance.dollars >= 0 ) {
        finalBalance.cents = (cents % 100 + 100) % 100;
    } else {
        finalBalance.cents = cents % 100;
    }
    
    return finalBalance;
}

long long utils::convertBalanceToCents(Balance balance) {
    return balance.dollars * 100LL + balance.cents;
}

utils::~utils()
{

}