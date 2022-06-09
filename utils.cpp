#include "utils.h"

utils::utils()
{

}

Balance utils::convertCentsToBalance(long long cents) {
    Balance finalBalance;
    finalBalance.dollars = cents/100;
    finalBalance.cents = (cents % 100 + 100) % 100;
    return finalBalance;
}

long long utils::convertBalanceToCents(Balance balance) {
    return balance.dollars * 100LL + balance.cents;
}

utils::~utils()
{

}