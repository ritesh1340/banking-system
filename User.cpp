#include "User.h"
#include <string>
using namespace std;

User::User(string name)
{
    this -> name = name;
    this -> id = getNewId();
}

User::~User()
{
    
}