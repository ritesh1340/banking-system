#ifndef USER_H
#define USER_H

#pragma once
#include <string>
#include "Balance.h"
using namespace std;

class User
{
public:
    User() = default;
    User(string);
    ~User();

    string name;
    Balance balance;

private:
    inline int getNewId() {
        static int id = 1;
        return id++;
    } 
    
    int id;
};

#endif