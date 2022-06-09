#include "Bank.h"
#include <iostream>
#include "Balance.h"
#include "utils.h"
#include "User.h"

using namespace std ; 

Bank::Bank()
{
    auto defaultUser = User("Ritesh");
    users[defaultUser.id] = defaultUser;
}

Balance Bank::getBalance(int id) {
    return users[id].balance;
}

Balance Bank::deposit(int id, Balance depositAmount) {
    auto &balance = users[id].balance;
    
    // handling the case of negative transaction
    long long depositAmountInCents = utils::convertBalanceToCents(depositAmount);
    if (depositAmountInCents < 0) {
        return withdraw(id, utils::convertCentsToBalance(-depositAmountInCents));
    }
    
    // actual transaction
    balance = utils::convertCentsToBalance(
        depositAmountInCents + utils::convertBalanceToCents(balance)
    );
    return balance;
}

Balance Bank::withdraw(int id, Balance withdrawAmount) {
    auto &balance = users[id].balance;
    
    // handling the case of negative transaction
    long long withdrawAmountInCents = utils::convertBalanceToCents(withdrawAmount);
    if (withdrawAmountInCents < 0) {
        return deposit(id, utils::convertCentsToBalance(-withdrawAmountInCents));
    }
    
    // actual transaction
    balance = utils::convertCentsToBalance(
        utils::convertBalanceToCents(balance) - withdrawAmountInCents
    );
    return balance;
}

Bank::~Bank()
{

}