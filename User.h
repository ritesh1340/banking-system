#ifndef USER_H
#define USER_H

#pragma once
#include <string>
using namespace std;

class User
{
public:
    User(string);
    ~User();

private:
    inline int getNewId() {
        static int id = 1;
        return id++;
    } 

    string name;
    int id;
};

#endif