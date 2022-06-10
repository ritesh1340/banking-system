#include<iostream>
#include "Bank.h"
#include "utils.h"

using namespace std ; 

void displayMenu() {
    cout << "Select an option:\n" ; 
    cout << "\t1. Credit\n";
    cout << "\t2. Debit\n";
    cout << "\t3. Check Balance\n";
    cout << "\t4. Exit" << "\n" ; 
    cout << "Enter your choice: " ; 
}

void handleCredit(int userID, Bank &bank) {
    auto creditAmount = utils::inputBalance();
    bank.deposit(userID, creditAmount);
    cout << "Successful" << "\n" ; 
}

void handleDebit(int userID, Bank &bank) {
    auto debitAmount = utils::inputBalance();
    bank.withdraw(userID, debitAmount);
    cout << "Done" << "\n" ; 
}

void handleGetBalance(int userID, Bank bank) {
    auto balance = bank.users[userID].balance;
    cout << "Current balance is: " << balance.dollars << "D " << balance.cents << "C" ; 
    cout << "\n" ; 
}

int main() {

    int choice;
    Bank bank;

    do {
        displayMenu();
        cin >> choice ; 

        if ( choice == 1 ) { 
            handleCredit(1, bank);
        } else if ( choice == 2 ) {
            handleDebit(1, bank);
        } else if ( choice == 3 ) {
            handleGetBalance(1, bank);
        } else if ( choice == 4 ) {
            cout << "Thank you!" << "\n" ; 
        } else {
            cout << "Invalid Input" << "\n" ; 
        }
    } while (choice != 4);
    

    return 0;
}