#ifndef BANK_H
#define BANK_H

#pragma once
#include "Balance.h"
#include "User.h"
#include <string>
#include <map>

class Bank
{
public:
    map < int, User > users;

    Bank();
    Balance deposit(int, Balance);
    Balance withdraw(int, Balance);
    Balance getBalance(int);
    ~Bank();

private:

};

#endif