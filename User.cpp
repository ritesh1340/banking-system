#include "User.h"
#include <string>
using namespace std;

User::User(string name)
{
    this -> name = name;
    this -> id = getNewId();
    this -> balance.dollars = 0;
    this -> balance.cents = 0;
}

User::~User()
{
    
}