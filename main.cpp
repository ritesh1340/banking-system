#include<iostream>
#include "Bank.h"
using namespace std ; 

void displayMenu() {
    cout << "Select an option:\n" ; 
    cout << "\t1. Credit\n";
    cout << "\t2. Debit\n";
    cout << "\t3. Check Balance\n";
    cout << "\t4. Exit" ; 
}

int main() {

    int choice;
    do {
        displayMenu();
        cin >> choice ; 

        if ( choice == 1 ) { 
            
        } else if ( choice == 2 ) {

        } else if ( choice == 3 ) {

        } else if ( choice != 4 ) {
            cout << "Bad Input\n" ; 
        }
    } while (choice != 4);
    

    return 0;
}